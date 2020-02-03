#include "CKString.h"

CKString::CKString() {
	Trace_Debug("\ndefult constructor", "CKString", " ");
	reset();
}

CKString::CKString( const char * str ) {
	Trace_Debug("\nc-str constructor", "CKString", " ");
	copy_str(str);
}

CKString::CKString(const CKString & old) {
	Trace_Debug("\ncopy constructor", "CKString", " ");
	copy_str(old);
}

CKString::CKString(CKString && other) noexcept {
	Trace_Debug("\nmove constructor", "CKString", " ");
	_s = std::move(other._s);
	_s_len = std::move(other._s_len);
	other.reset();
}

void CKString::reset() {
	Trace_Debug("function", "reset", " ");
	if (_s) delete[] _s;
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
	if (_s)
		std::cout << _s << std::endl;
	else
		std::cout << "Unable to print since string is NULL" << std::endl;
}

CKString::operator const char* () const {
	Trace_Debug("operator", "conversion from const char *", " ");
	return _s;
}