#include "PermamentTable.h"

PermamentTable::PermamentTable()
{

}

void PermamentTable::add( const std::string & elem )
{
	_table.insert( elem );
}

bool PermamentTable::contains( const std::string & elem ) const
{
	return _table.find( elem ) == _table.end();
}
