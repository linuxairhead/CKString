#pragma once
#include <cstring>
#include <iostream>

#define __CKString__MAX_LEN 65535

class CKString
{
	char* _s ;
	size_t _s_len ;

public:
	CKString( );								// default constructor
	CKString( const char * );					// c-str constructor

	/* Data Management */
	void reset();								// reset CKString object
	const char* copy_str(const char*);			// copy string 

	/* String Utility */
	void print_str();							// print string function.
};

