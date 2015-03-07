#include "nimbus/io/SerializeSTL.h"
#include "nimbus/io/SerializeNative.h"
#include "nimbus/io/IOutputStream.h"

bool nimbus::io::serialize(nimbus::io::IOutputStream& stream, const std::string& value)
{
	// Write string size
	if (!nimbus::io::serialize(stream, (unsigned int) value.size()))
	{
		return false;
	}
	for (unsigned char c : value)
	{
		if (!nimbus::io::serialize(stream, c))
		{
			return false;
		}
	}
	return true;
}
