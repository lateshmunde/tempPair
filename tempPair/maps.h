#pragma once

#include <iostream>
#include <vector>
#include "Pairs.h"

template <typename T1, typename T2>
class maps {
private:
	T1 mapFirst;
	T2 mapSecond;
	std::vector<std::Pair<T1, T2>> mapTemp;

public:
	void insert(const T1& key, const T2& value)
	{
		Pair.setFirst() = key;
		Pair.setSecond() = value;

		mapTemp.push_back(Pair (key, value));

	}

	void mapFirst(const Pair<T1, T2>& pr)
	{
		return pr.getFirst();
	}

	void mapSecond( const Pair<T1, T2>& pr)
	{
		return pr.getSecond();
	}
};