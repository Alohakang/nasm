#include "ini.h"



ini::ini()
{
	ifstream in("nasm.ini");
	if (!in.is_open()) {
		cout << "Error:can not opening file nasm.ini";
	}
	else {		
		getline(in, nasmPath);
		getline(in, nasmPath);
		getline(in, asmPath);
		getline(in, asmPath);
		getline(in, binPath);
		getline(in, binPath);
	}
}

string ini::getnasmPath()
{
	return this->nasmPath;
}

string ini::getasmPath()
{
	return this->asmPath;
}

string ini::getbinPath()
{
	return this->binPath;
}


ini::~ini()
{
	
}
