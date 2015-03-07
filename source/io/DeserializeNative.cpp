#include "nimbus/io/DeserializeNative.h"
#include "nimbus/io/IInputStream.h"

template <typename T>
bool deserializeNative(nimbus::io::IInputStream& stream, T* value, uint64_t size)
{
	if (size == 0)
	{
		return true;
	}
	if (value == nullptr)
	{
		return false;
	}

	uint64_t sizeRead = stream.read((void*) value, sizeof(T) * size);
	return (sizeRead == (sizeof(T) * size));
}

bool nimbus::io::deserialize(nimbus::io::IInputStream& stream, int8_t& value)
{
	return nimbus::io::deserialize(stream, &value, 1);
}

bool nimbus::io::deserialize(nimbus::io::IInputStream& stream, int8_t* value, uint64_t size)
{
	return deserializeNative(stream, value, size);
}

bool nimbus::io::deserialize(nimbus::io::IInputStream& stream, uint8_t& value)
{
	return nimbus::io::deserialize(stream, &value, 1);
}

bool nimbus::io::deserialize(nimbus::io::IInputStream& stream, uint8_t* value, uint64_t size)
{
	return deserializeNative(stream, value, size);
}

bool nimbus::io::deserialize(nimbus::io::IInputStream& stream, int16_t& value)
{
	return nimbus::io::deserialize(stream, &value, 1);
}

bool nimbus::io::deserialize(nimbus::io::IInputStream& stream, int16_t* value, uint64_t size)
{
	return deserializeNative(stream, value, size);
}

bool nimbus::io::deserialize(nimbus::io::IInputStream& stream, uint16_t& value)
{
	return nimbus::io::deserialize(stream, &value, 1);
}

bool nimbus::io::deserialize(nimbus::io::IInputStream& stream, uint16_t* value, uint64_t size)
{
	return deserializeNative(stream, value, size);
}

bool nimbus::io::deserialize(nimbus::io::IInputStream& stream, int32_t& value)
{
	return nimbus::io::deserialize(stream, &value, 1);
}

bool nimbus::io::deserialize(nimbus::io::IInputStream& stream, int32_t* value, uint64_t size)
{
	return deserializeNative(stream, value, size);
}

bool nimbus::io::deserialize(nimbus::io::IInputStream& stream, uint32_t& value)
{
	return nimbus::io::deserialize(stream, &value, 1);
}

bool nimbus::io::deserialize(nimbus::io::IInputStream& stream, uint32_t* value, uint64_t size)
{
	return deserializeNative(stream, value, size);
}

bool nimbus::io::deserialize(nimbus::io::IInputStream& stream, int64_t& value)
{
	return nimbus::io::deserialize(stream, &value, 1);
}

bool nimbus::io::deserialize(nimbus::io::IInputStream& stream, int64_t* value, uint64_t size)
{
	return deserializeNative(stream, value, size);
}

bool nimbus::io::deserialize(nimbus::io::IInputStream& stream, uint64_t& value)
{
	return nimbus::io::deserialize(stream, &value, 1);
}

bool nimbus::io::deserialize(nimbus::io::IInputStream& stream, uint64_t* value, uint64_t size)
{
	return deserializeNative(stream, value, size);
}

bool nimbus::io::deserialize(nimbus::io::IInputStream& stream, float& value)
{
	return nimbus::io::deserialize(stream, &value, 1);
}

bool nimbus::io::deserialize(nimbus::io::IInputStream& stream, float* value, uint64_t size)
{
	return deserializeNative(stream, value, size);
}

bool nimbus::io::deserialize(nimbus::io::IInputStream& stream, double& value)
{
	return nimbus::io::deserialize(stream, &value, 1);
}

bool nimbus::io::deserialize(nimbus::io::IInputStream& stream, double* value, uint64_t size)
{
	return deserializeNative(stream, value, size);
}
