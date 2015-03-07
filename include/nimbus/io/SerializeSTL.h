#pragma once

#include <string>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <unordered_map>

namespace nimbus
{

namespace io
{

class IOutputStream;

bool serialize(IOutputStream& stream, const ::std::string& value);

template<typename T>
bool serialize(IOutputStream& stream, const ::std::vector<T>& value);

template<typename T>
bool serialize(IOutputStream& stream, const ::std::list<T>& value);

template<typename T>
bool serialize(IOutputStream& stream, const ::std::set<T>& value);

template<typename K, typename V>
bool serialize(IOutputStream& stream, const ::std::map<K, V>& value);

template<typename K, typename V>
bool serialize(IOutputStream& stream, const ::std::unordered_map<K, V>& value);

template <typename T>
bool serialize(IOutputStream& stream, const ::std::vector<T>& value)
{
	// Write size of container
	if (!serialize(stream, (unsigned int) value.size()))
	{
		return false;
	}
	for (const auto& v : value)
	{
		if (!serialize(stream, v))
		{
			return false;
		}
	}
	return true;
}

template <typename T>
bool serialize(IOutputStream& stream, const ::std::list<T>& value)
{
	// Write size of container
	if (!serialize(stream, (unsigned int) value.size()))
	{
		return false;
	}
	for (const auto& v : value)
	{
		if (!serialize(stream, v))
		{
			return false;
		}
	}
	return true;
}

template <typename K, typename V>
bool serialize(IOutputStream& stream, const ::std::map<K, V>& value)
{
	// Write size of container
	if (!serialize(stream, (unsigned int) value.size()))
	{
		return false;
	}
	for (const auto& v : value)
	{
		if (!serialize(stream, v.first))
		{
			return false;
		}
		if (!serialize(stream, v.second))
		{
			return false;
		}
	}
	return true;
}

template <typename K, typename V>
bool serialize(IOutputStream& stream, const ::std::unordered_map<K, V>& value)
{
	// Write size of container
	if (!serialize(stream, (unsigned int) value.size()))
	{
		return false;
	}
	for (const auto& v : value)
	{
		if (!serialize(stream, v.first))
		{
			return false;
		}
		if (!serialize(stream, v.second))
		{
			return false;
		}
	}
	return true;
}

}

}
