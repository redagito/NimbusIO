#include "nimbus/io/CMemoryStream.h"

#include <cstring>

using namespace nimbus::io;

uint64_t CMemoryStream::read(void* data, uint64_t size)
{
	// Byte offset into data pointer
	unsigned int dataOffset = 0;
	while (size != 0)
	{
		// Check if data is available for reading
		if (isEmpty())
		{
			// Return size of read data
			return dataOffset;
		}

		// Calculate available data size of current chunk
		unsigned int copySize = m_chunks.front().end - m_chunks.front().start;

		// Check if data is available in current chunk
		if (copySize == 0)
		{
			// Front chunk is empty, delete
			if (m_chunks.size() > 1)
			{
				m_chunks.pop_front();
			}
			else
			{
				// Reset first chunk
				m_chunks.front().start = 0;
				m_chunks.front().end = 0;
			}
		}
		else
		{
			// Data available for reading
			if (copySize > size)
			{
				copySize = size;
			}
			// Write chunk data into data buffer
			memcpy(&((unsigned char*) data)[dataOffset], &m_chunks.front().data[m_chunks.front().start], copySize);
			// Set front chunk start index
			m_chunks.front().start += copySize;
			// Set data offset
			dataOffset += copySize;
			// Set data size to be read
			size -= copySize;
		}
	}
	return dataOffset;
}

uint64_t CMemoryStream::write(const void* data, uint64_t size)
{
	// Current offset into data buffer
	unsigned int dataOffset = 0;
	while (size != 0)
	{
		// Check chunk memory available
		unsigned int chunkSpace = getAvailableChunkSpace();
		if (chunkSpace != 0)
		{
			// Fill available memory
			unsigned int copySize = chunkSpace;
			if (copySize > size)
			{
				copySize = size;
			}

			// Write to chunk memory
			memcpy(&m_chunks.back().data[m_chunks.back().end], &((const unsigned char*) data)[dataOffset], copySize);
			// Set end index of back chunk
			m_chunks.back().end += copySize;
			// Set current data buffer offset
			dataOffset += copySize;
			// Set size of data to be written
			size -= copySize;
		}
		else
		{
			// No memory available, create new chunk
			m_chunks.push_back(SChunk());
		}
	}
	return dataOffset;
}

bool CMemoryStream::isEmpty() const
{
	return m_chunks.empty() || (m_chunks.front().end - m_chunks.front().start == 0);
}

void CMemoryStream::clear()
{
	m_chunks.clear();
}

uint32_t CMemoryStream::getAvailableChunkSpace() const
{
	uint32_t chunkSpace = 0;
	if (!m_chunks.empty())
	{
		chunkSpace = CMemoryStream::SChunk::defaultChunkSize - m_chunks.back().end;
	}
	return chunkSpace;
}

CMemoryStream::SChunk& CMemoryStream::SChunk::operator=(const SChunk& rhs)
{
	start = rhs.start;
	end = rhs.end;
	
	for (uint32_t i = 0; i < CMemoryStream::SChunk::defaultChunkSize; ++i)
	{
		data[i] = rhs.data[i];
	}
	return *this;
}
