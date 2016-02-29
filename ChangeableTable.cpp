#include "ChangeableTable.h"

#include <algorithm>

ChangeableTable::ChangeableTable( size_t size ):
	_TABLE_SIZE( size )
{
	_table.resize( _TABLE_SIZE );
}

ChangeableTable::ChangeableTable():
	ChangeableTable( 100 )
{

}

void ChangeableTable::initializeLexeme( const std::string & name )
{

}

bool ChangeableTable::contains( const std::string & name )
{
	size_t h = hash( name );
	for ( auto lexeme : _table[h] ) {
		if ( lexeme.name() == name )
			return true;
	}
	return false;
}

bool ChangeableTable::initialized( const std::string & name )
{

}

size_t ChangeableTable::hash( const std::string & name ) const
{
	size_t h = 0;
	for ( auto c : name )
		h += c;

	h %= _TABLE_SIZE;

	return h;
}
