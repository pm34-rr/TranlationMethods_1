#pragma once

#include <set>
#include <string>

class PermamentTable
{
public:
	PermamentTable();

	void add( const std::string & elem );
	bool contains( const std::string & elem ) const;

private:
	std::set<std::string> _table;
};
