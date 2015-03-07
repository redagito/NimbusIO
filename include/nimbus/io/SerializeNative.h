#include <cstdint>

/**
* \brief Serialization of native types.
*/
namespace nimbus
{

namespace io
{

class IOutputStream;

/**
* \brief Serialization of signed 8 bit integer.
*/
bool serialize(IOutputStream& stream, int8_t value);
bool serialize(IOutputStream& stream, const int8_t* value, uint64_t size);

/**
* \brief Serialization of unsigned 8 bit integer.
*/
bool serialize(IOutputStream& stream, uint8_t value);
bool serialize(IOutputStream& stream, const uint8_t* value, uint64_t size);

/**
* \brief Serialization of signed 16 bit integer.
*/
bool serialize(IOutputStream& stream, int16_t value);
bool serialize(IOutputStream& stream, const int16_t* value, uint64_t size);

/**
* \brief Serialization of unsigned 16 bit integer.
*/
bool serialize(IOutputStream& stream, uint16_t value);
bool serialize(IOutputStream& stream, const uint16_t* value, uint64_t size);

/**
* \brief Serialization of signed 32 bit integer.
*/
bool serialize(IOutputStream& stream, int32_t value);
bool serialize(IOutputStream& stream, const int32_t* value, uint64_t size);

/**
* \brief Serialization of unsigned 32 bit integer.
*/
bool serialize(IOutputStream& stream, uint32_t value);
bool serialize(IOutputStream& stream, const uint32_t* value, uint64_t size);

/**
* \brief Serialization of signed 64 bit integer.
*/
bool serialize(IOutputStream& stream, int64_t value);
bool serialize(IOutputStream& stream, const int64_t* value, uint64_t size);

/**
* \brief Serialization of unsigned 64 bit integer.
*/
bool serialize(IOutputStream& stream, uint64_t value);
bool serialize(IOutputStream& stream, const uint64_t* value, uint64_t size);

/**
* \brief Serialization of 32 bit real.
*/
bool serialize(IOutputStream& stream, float value);
bool serialize(IOutputStream& stream, const float* value, uint64_t size);

/**
* \brief Serialization of 64 bit real.
*/
bool serialize(IOutputStream& stream, double value);
bool serialize(IOutputStream& stream, const double* value, uint64_t size);

}

}