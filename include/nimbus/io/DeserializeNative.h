#include <cstdint>

/**
* \brief Deserialization of native types.
*/
namespace nimbus
{

namespace io
{

class IInputStream;

/**
* \brief Deserialization of signed 8 bit integer.
*/
bool deserialize(IInputStream& stream, int8_t& value);
bool deserialize(IInputStream& stream, int8_t* value, uint64_t size);

/**
* \brief Deserialization of unsigned 8 bit integer.
*/
bool deserialize(IInputStream& stream, uint8_t& value);
bool deserialize(IInputStream& stream, uint8_t* value, uint64_t size);

/**
* \brief Deserialization of signed 16 bit integer.
*/
bool deserialize(IInputStream& stream, int16_t& value);
bool deserialize(IInputStream& stream, int16_t* value, uint64_t size);

/**
* \brief Deserialization of unsigned 16 bit integer.
*/
bool deserialize(IInputStream& stream, uint16_t& value);
bool deserialize(IInputStream& stream, uint16_t* value, uint64_t size);

/**
* \brief Deserialization of signed 32 bit integer.
*/
bool deserialize(IInputStream& stream, int32_t& value);
bool deserialize(IInputStream& stream, int32_t* value, uint64_t size);

/**
* \brief Deserialization of unsigned 32 bit integer.
*/
bool deserialize(IInputStream& stream, uint32_t& value);
bool deserialize(IInputStream& stream, uint32_t* value, uint64_t size);

/**
* \brief Deserialization of signed 64 bit integer.
*/
bool deserialize(IInputStream& stream, int64_t& value);
bool deserialize(IInputStream& stream, int64_t* value, uint64_t size);

/**
* \brief Deserialization of unsigned 64 bit integer.
*/
bool deserialize(IInputStream& stream, uint64_t& value);
bool deserialize(IInputStream& stream, uint64_t* value, uint64_t size);

/**
* \brief Deserialization of 32 bit real.
*/
bool deserialize(IInputStream& stream, float& value);
bool deserialize(IInputStream& stream, float* value, uint64_t size);

/**
* \brief Deserialization of 64 bit real.
*/
bool deserialize(IInputStream& stream, double& value);
bool deserialize(IInputStream& stream, double* value, uint64_t size);

}

}
