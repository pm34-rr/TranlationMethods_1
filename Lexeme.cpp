#include "Lexeme.h"

Lexeme::Lexeme( const std::string & name, Type type, bool isArray, uint size ):
	_name( name ),
	_type( type ),
	_isArray( isArray )
{
	if ( isArray && size > 1 )
		throw 1;

	_initialize.resize( size );
}

const std::string & Lexeme::name() const
{
	return _name;
}

Type Lexeme::type() const
{
	return _type;
}

bool Lexeme::isArray() const
{
	return _isArray;
}

size_t Lexeme::arraySize() const
{
	return _initialize.size();
}

void Lexeme::setInitialized( uint num )
{
	if ( !isIndexCorrect( num ) )
		throw 1;

	_initialize[num] = 1;
}

bool Lexeme::isInitialized( uint num ) const
{
	if ( !isIndexCorrect( num ) )
		throw 1;

	return _initialize[num];
}

bool Lexeme::isIndexCorrect( uint num ) const
{
	if ( _isArray && num > 0 )
		return false;

	if ( num > _initialize.size() )
		return false;

	return true;
}
