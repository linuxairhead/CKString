#include "CKString.h"

CKString::CKString() {
	Trace_Debug("defult constructor", "CKString", " ");
	reset();
}

CKString::CKString( const char * str ) {
	Trace_Debug("c-str constructor", "CKString", " ");
	copy_str(str);
}

void CKString::reset() {
	Trace_Debug("function", "reset", " ");
	_s = nullptr;
	_s_len = 0;
}

const char* CKString::copy_str( const char* newStr ) {
	Trace_Debug("function", "copy_str", " ");
	if (newStr) {
		_s_len = strnlen(newStr, __CKString__MAX_LEN);
		_s = new char[_s_len+1]();
		strcpy_s(_s, _s_len + 1, newStr);
	}
	return _s;
}

void CKString::print_str() {
	Trace_Debug("function", "print_str", " ");
	std::cout << _s << std::endl;
}