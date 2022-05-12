#pragma once
#include <string>

class MNode
{
public:
	std::string name;
	uint32_t nID;

	MNode()
	{
		name = "nNode";
		nID = 0;
	}
};