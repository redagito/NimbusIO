#pragma once

#include <cstdint>

namespace nimbus
{

namespace io
{

/**
 * \brief Writeable stream interface.
 */
class IOutputStream
{
public:
	virtual ~IOutputStream();

	virtual uint64_t write(const void* data, uint64_t size) = 0;
};

}

}
