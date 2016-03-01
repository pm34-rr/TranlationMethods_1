#include <iostream>

#include "ChangeableTable.h"
#include "PermamentTable.h"

using namespace std;

void testChangeableTable()
{
	cout << "===Testing Changeable table===" << endl;
	ChangeableTable mutTable;
	cout << "Is 'abc' in table?" << endl;
	cout << mutTable.contains( "abc" ) << endl;
	cout << "Adding 'abc'" << endl;
	mutTable.add( "abc", INT );

	cout << "Is 'abc' in table?" << endl;
	cout << mutTable.contains( "abc" ) << endl;

	cout << "Table size: " << mutTable.notNullSize() << endl;
	cout << "Adding 'abc'" << endl;
	mutTable.add( "abc", INT );
	cout << "Table size: " << mutTable.notNullSize() << endl;

	cout << "Is 'abc' initialized?" << endl;
	cout << mutTable.initialized( "abc" ) << endl;
	cout << "Initializing 'abc'" << endl;
	mutTable.initializeLexeme( "abc" );
	cout << "Is 'abc' initialized?" << endl;
	cout << mutTable.initialized( "abc" ) << endl;

	cout << "Adding 'bac'" << endl;
	mutTable.add( "bac", INT );
	cout << "Table size: " << mutTable.notNullSize() << endl << endl;
}

void testPermamentTable()
{
	cout << "===Testing Permament table===" << endl;
	PermamentTable table;

	cout << "Is ';' in table?" << endl;
	cout << table.contains( ";" ) << endl;
	cout << "Adding ';'" << endl;
	table.add( ";" );

	cout << "Is ';' in table?" << endl;
	cout << table.contains( ";" ) << endl;

	cout << "Table size: " << table.size() << endl;
	cout << "Adding ';'" << endl;
	table.add( ";" );
	cout << "Table size: " << table.size() << endl;

	cout << "Adding '\\n'" << endl;
	table.add( "\\n" );
	cout << "Table size: " << table.size() << endl << endl;
}

int main()
{
	testChangeableTable();
	testPermamentTable();

	return 0;
}
