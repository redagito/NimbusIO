#pragma once

#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <unordered_map>

#include "DeserializeNative.h"

namespace nimbus
{

namespace io
{

class IInputStream;

bool deserialize(IInputStream& stream, ::std::string& value);

template <typename T>
bool deserialize(IInputStream& stream, ::std::vector<T>& value)
{
	value.clear();
	uint64_t size = 0;
	if (!deserialize(stream, size))
	{
		return false;
	}
	value.reserve(size);
	for (unsigned int i = 0; i < size; ++i)
	{
		T v;
		if (!deserialize(stream, v))
		{
			return false;
		}
		value.push_back(v);
	}
	return true;
}

template <typename T>
bool deserialize(IInputStream& stream, ::std::list<T>& value)
{
	value.clear();
	unsigned int size = 0;
	if (!deserialize(stream, size))
	{
		return false;
	}
	value.reserve(size);
	for (unsigned int i = 0; i < size; ++i)
	{
		T v;
		if (!deserialize(stream, v))
		{
			return false;
		}
		value.push_back(v);
	}
	return true;
}

template <typename K, typename V>
bool deserialize(IInputStream& stream, ::std::map<K, V>& value)
{
	value.clear();
	// Read container size
	unsigned int size = 0;
	if (!deserialize(stream, size))
	{
		return false;
	}
	// Read map values
	for (unsigned int i = 0; i < size; ++i)
	{
		K k; // Key
		V v; // Value
		if (!deserialize(stream, k))
		{
			return false;
		}
		if (!deserialize(stream, k))
		{
			return false;
		}
		value[k] = v;
	}
	return true;
}

template <typename K, typename V>
bool deserialize(IInputStream& stream, ::std::unordered_map<K, V>& value)
{
	value.clear();
	// Read container size
	unsigned int size = 0;
	if (!deserialize(stream, size))
	{
		return false;
	}
	// Read map values
	for (unsigned int i = 0; i < size; ++i)
	{
		K k; // Key
		V v; // Value
		if (!deserialize(stream, k))
		{
			return false;
		}
		if (!deserialize(stream, k))
		{
			return false;
		}
		value[k] = v;
	}
	return true;
}

}

}
