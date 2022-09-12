#pragma once
#include <list>

using namespace std;

class Estado{

public:	
	virtual bool eObjetivo() = 0;
	virtual list<Estado *> expandir() = 0;
	
};

