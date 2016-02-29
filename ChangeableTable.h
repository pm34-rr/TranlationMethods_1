#pragma once

#include "Lexeme.h"

#include <vector>

typedef std::vector<Lexeme> vl;

class ChangeableTable
{
public:
	ChangeableTable( size_t size );
	ChangeableTable();

	void add( const std::string & name, Type type, bool isArray = false, size_t arraySize = 1 );
	void initializeLexeme( const std::string & name );

	bool contains( const std::string & name );
	bool initialized( const std::string & name );


private:
	void addByHash( const Lexeme & lexeme, size_t hash );
	bool contains( size_t hash );

	size_t getHash( const std::string & name ) const;


	const size_t		_TABLE_SIZE;
	std::vector<vl>		_table;
};
