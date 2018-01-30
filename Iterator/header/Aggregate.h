#pragma once
#include "Iterator.h"

class Aggregate {
public:
	virtual Iterator* getIterator() = 0;
};