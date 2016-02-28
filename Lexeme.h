#pragma once

#include <string>
#include <vector>

enum Type {
	INT,
	FLOAT
};

class Lexeme
{
public:
	Lexeme( const std::string & name, Type type, bool isArray, uint size = 1 );

	void setInitialized( uint num = 0 );
	bool isInitialized( uint num = 0 ) const;

private:
	std::string			_name;
	Type				_type;
	bool				_isArray;
	std::vector<char>	_initialize;

	bool isIndexCorrect( uint num ) const;
};
