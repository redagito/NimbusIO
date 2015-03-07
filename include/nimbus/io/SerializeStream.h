#pragma once

namespace nimbus
{

namespace io
{

class IInputStream;
class IOutputStream;

bool serialize(IOutputStream& stream, IInputStream& data);

}

}