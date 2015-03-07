#pragma once

#include "IOutputStream.h"

namespace nimbus
{

namespace io
{

/**
 * \brief Console stream.
 */
class CConsoleOutputStream : public IOutputStream
{
public:
	uint64_t write(const void* data, uint64_t size);
};

}

}
