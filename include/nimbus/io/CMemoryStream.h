#pragma once

#include <list>

#include "IInputStream.h"
#include "IOutputStream.h"

namespace nimbus
{

namespace io
{

/**
 * \brief Memory stream implementation.
 */
class CMemoryStream : public IInputStream, public IOutputStream
{
public:
	uint64_t read(void* data, uint64_t size);
	uint64_t write(const void* data, uint64_t size);

	bool isEmpty() const;
	void clear();
	
protected:
	uint32_t getAvailableChunkSpace() const;

private:
	
	/**
	 * \brief Internal chunk type.
	 */
	struct SChunk
	{
		static const uint32_t defaultChunkSize = 1024 * 64; /**< Default chunk size, 64 kB. */
		unsigned char data[defaultChunkSize]; /**< Chunk memory. */
		uint32_t start = 0; /**< Starting offset of chunk memory. */
		uint32_t end = 0; /**< End offset of chunk memory. */
		
		SChunk& operator=(const SChunk& rhs);
	};
	::std::list<SChunk> m_chunks;
};

}

}
