#include "CKString.h"

int main() {

	// constructor tester
	CKString s("Hello World!");
	s.print_str();

	CKString m = s;
	m.print_str();
	s.print_str();

	CKString k = std::move(s);
	k.print_str();
	s.print_str();
}