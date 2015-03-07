#pragma once

#include <string>

#include "IOutputStream.h"

namespace nimbus
{

namespace io
{

class CFileOutputStream : public IOutputStream
{
public:
	bool open(const ::std::string& fileName);
	void close();
	
	uint64_t write(const void* data, uint64_t size);
	
	const std::string& getFileName() const;
	
private:
	::std::string m_fileName;
};

}

}