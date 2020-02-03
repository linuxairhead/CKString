#include "CKString.h"

CKString::CKString() {
	reset();
}

CKString::CKString( const char * str ) {
	copy_str(str);
}

void CKString::reset() {
	_s = nullptr;
	_s_len = 0;
}

const char* CKString::copy_str( const char* newStr ) {

	if (newStr) {
		_s_len = strnlen(newStr, __CKString__MAX_LEN);
		_s = new char[_s_len+1]();
		strcpy_s(_s, _s_len + 1, newStr);
	}

	return _s;
}

void CKString::print_str() {
	std::cout << _s << std::endl;
}