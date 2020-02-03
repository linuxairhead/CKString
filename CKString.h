#pragma once
#include <cstring>
#include <iostream>

#define __CKString__MAX_LEN 65535
#define _DEBUG_ true

#ifdef _DEBUG_
#define Trace_Debug(fType, fName, debugStr)  std::cout << fType << " " << fName <<   " " << debugStr << std::endl;
#else
#define Trace_Debug(fName, debugStr)
#endif

class CKString
{
	char* _s ;
	size_t _s_len ;

public:
	CKString( );								// default constructor
	CKString( const char * );					// c-str constructor
	CKString(const CKString & );				// copy constructor
	CKString(CKString&&) noexcept;				// move constructor

	/* Data Management */
	void reset();								// reset CKString object
	const char* copy_str(const char*);			// copy string 

	/* String Utility */
	void print_str();							// print string function.

	/* operator */
	operator const char* () const;				// c-str conversion operator
};

