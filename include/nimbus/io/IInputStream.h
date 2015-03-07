#pragma once

#include <cstdint>

namespace nimbus
{

namespace io
{

class IInputStream
{
public:
	virtual ~IInputStream();

	virtual uint64_t read(void* data, uint64_t size) = 0;
};

}

}
