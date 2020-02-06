#include "CKString.h"

int main() {

	// c-str constructor tester
	CKString s("Hello World!");
	s.print_str();

	// copy constructor.
	CKString m = s;
	m.print_str();
	s.print_str();

	// move constructor tester
	CKString k = std::move(s);
	k.print_str();
	s.print_str();


	// copy swap operator test
	m = "copy";
	s = "swap";
	m = s;

	m.print_str();
	s.print_str();
}