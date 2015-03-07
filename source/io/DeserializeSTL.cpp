#include "nimbus/io/DeserializeSTL.h"
#include "nimbus/io/DeserializeNative.h"
#include "nimbus/io/IInputStream.h"

bool nimbus::io::deserialize(nimbus::io::IInputStream& stream, std::string& value)
{
	value.clear();
	// Read string size
	unsigned int size;
	if (!nimbus::io::deserialize(stream, size))
	{
		return false;
	}
	// Reserve space
	value.reserve(size);
	// Read string data
	for (unsigned int i = 0; i < size; ++i)
	{
		unsigned char c;
		if (!nimbus::io::deserialize(stream, c))
		{
			return false;
		}
		value.push_back(c);
	}
	return true;
}
