#include "ChangeableTable.h"

ChangeableTable::ChangeableTable( size_t size ):
	_TABLE_SIZE( size )
{
	_table.resize( _TABLE_SIZE );
}

ChangeableTable::ChangeableTable():
	ChangeableTable( 100 )
{

}

void ChangeableTable::add( const std::string & name, Type type , bool isArray, size_t arraySize )
{
	if ( contains( name ) )
		return;

	Lexeme lexeme( name, type, isArray, arraySize );
	size_t hash = getHash( name );
	addByHash( lexeme, hash );
}

void ChangeableTable::initializeLexeme( const std::string & name )
{

}

bool ChangeableTable::contains( const std::string & name )
{
	size_t hash = getHash( name );
	for ( auto lexeme : _table[hash] ) {
		if ( lexeme.name() == name )
			return true;
	}
	return false;
}

bool ChangeableTable::initialized( const std::string & name )
{
	size_t hash = getHash( name );
	for ( auto lexeme : _table[hash] ) {
		if ( lexeme.name() == name ) {

		}
	}
}

void ChangeableTable::addByHash( const Lexeme & lexeme, size_t hash )
{
	_table[hash].push_back( lexeme );
}

size_t ChangeableTable::getHash( const std::string & name ) const
{
	size_t h = 0;
	for ( auto c : name )
		h += c;

	h %= _TABLE_SIZE;

	return h;
}

bool ChangeableTable::contains( size_t hash )
{
	return _table[hash].size() > 0;
}
