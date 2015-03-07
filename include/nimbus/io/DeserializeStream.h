#pragma once

namespace nimbus
{

namespace io
{

class IInputStream;
class IOutputStream;

bool deserialize(IInputStream& stream, IOutputStream& data);

}

}