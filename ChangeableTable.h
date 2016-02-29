#pragma once

#include "Lexeme.h"

#include <vector>

typedef std::vector<Lexeme> vl;

class ChangeableTable
{
public:
	ChangeableTable( size_t size );
	ChangeableTable();

	void add( const std::string & name );
	void initializeLexeme( const std::string & name );

	bool contains( const std::string & name );
	bool initialized( const std::string & name );


private:
	size_t hash( const std::string & name ) const;

	const size_t		_TABLE_SIZE;
	std::vector<vl>		_table;
};
