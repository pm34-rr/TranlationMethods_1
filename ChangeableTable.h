#pragma once

#include "Lexeme.h"

#include <vector>

class ChangeableTable
{
public:
	ChangeableTable( uint size );
	ChangeableTable();

private:
	std::vector<Lexem>	_table;
};
