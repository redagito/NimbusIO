#include <iostream>

#include "nimbus/io/CConsoleOutputStream.h"

using namespace nimbus::io;

uint64_t CConsoleOutputStream::write(const void* data, uint64_t size)
{
	std::cout.write((const char*) data, size);
	return size;
}