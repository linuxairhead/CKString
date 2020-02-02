#pragma once
class CKString
{
	char* _s = nullptr;
	int _s_len = 0;

public:
	CKString();									// default constructor
	CKString(char*);							// c-str constructor
};

