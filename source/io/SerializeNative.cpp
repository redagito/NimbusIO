#include "nimbus/io/SerializeNative.h"
#include "nimbus/io/IOutputStream.h"

template<typename T>
bool serializeNative(nimbus::io::IOutputStream& stream, const T* value, uint64_t size)
{
	if (size == 0)
	{
		return true;
	}
	if (value == nullptr)
	{
		return false;
	}
	
	uint64_t sizeWrite = stream.write((const void*) value, sizeof(T) * size);
	return sizeWrite == sizeof(T) * size;
}

bool nimbus::io::serialize(nimbus::io::IOutputStream& stream, int8_t value)
{
	return nimbus::io::serialize(stream, &value, 1);
}

bool nimbus::io::serialize(nimbus::io::IOutputStream& stream, const int8_t* value, uint64_t size)
{
	return serializeNative(stream, value, size);
}

bool nimbus::io::serialize(nimbus::io::IOutputStream& stream, uint8_t value)
{
	return nimbus::io::serialize(stream, &value, 1);
}

bool nimbus::io::serialize(nimbus::io::IOutputStream& stream, const uint8_t* value, uint64_t size)
{
	return serializeNative(stream, value, size);
}

bool nimbus::io::serialize(nimbus::io::IOutputStream& stream, int16_t value)
{
	return nimbus::io::serialize(stream, &value, 1);
}

bool nimbus::io::serialize(nimbus::io::IOutputStream& stream, const int16_t* value, uint64_t size)
{
	return serializeNative(stream, value, size);
}

bool nimbus::io::serialize(nimbus::io::IOutputStream& stream, uint16_t value)
{
	return nimbus::io::serialize(stream, &value, 1);
}

bool nimbus::io::serialize(nimbus::io::IOutputStream& stream, const uint16_t* value, uint64_t size)
{
	return serializeNative(stream, value, size);
}

bool nimbus::io::serialize(nimbus::io::IOutputStream& stream, int32_t value)
{
	return nimbus::io::serialize(stream, &value, 1);
}

bool nimbus::io::serialize(nimbus::io::IOutputStream& stream, const int32_t* value, uint64_t size)
{
	return serializeNative(stream, value, size);
}

bool nimbus::io::serialize(nimbus::io::IOutputStream& stream, uint32_t value)
{
	return nimbus::io::serialize(stream, &value, 1);
}

bool nimbus::io::serialize(nimbus::io::IOutputStream& stream, const uint32_t* value, uint64_t size)
{
	return serializeNative(stream, value, size);
}

bool nimbus::io::serialize(nimbus::io::IOutputStream& stream, int64_t value)
{
	return nimbus::io::serialize(stream, &value, 1);
}

bool nimbus::io::serialize(nimbus::io::IOutputStream& stream, const int64_t* value, uint64_t size)
{
	return serializeNative(stream, value, size);
}

bool nimbus::io::serialize(nimbus::io::IOutputStream& stream, uint64_t value)
{
	return nimbus::io::serialize(stream, &value, 1);
}

bool nimbus::io::serialize(nimbus::io::IOutputStream& stream, const uint64_t* value, uint64_t size)
{
	return serializeNative(stream, value, size);
}

bool nimbus::io::serialize(nimbus::io::IOutputStream& stream, float value)
{
	return nimbus::io::serialize(stream, &value, 1);
}

bool nimbus::io::serialize(nimbus::io::IOutputStream& stream, const float* value, uint64_t size)
{
	return serializeNative(stream, value, size);
}

bool nimbus::io::serialize(nimbus::io::IOutputStream& stream, double value)
{
	return nimbus::io::serialize(stream, &value, 1);
}

bool nimbus::io::serialize(nimbus::io::IOutputStream& stream, const double* value, uint64_t size)
{
	return serializeNative(stream, value, size);
}
