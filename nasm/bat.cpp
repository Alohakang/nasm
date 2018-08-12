#include "bat.h"



bat::bat()
{
	this->asmPath = i.getasmPath();
	this->nasmPath = i.getnasmPath();
	this->binPath = i.getbinPath();
	this->order =
		this->nasmPath + "\\nasm -f bin " +
		this->asmPath + " -o " +
		this->binPath + getName() + ".bin";
	this->wbat();
}

void bat::wbat()
{
	ofstream out("nasm.bat",ios::out);
	if (!out.is_open()) {
		cout << "Error:can not opening file nasm.ini";
	}
	else {
		out<<getOrder();
	}
	out.close();
}

string bat::getOrder()
{
	return string(this->order);
}

string bat::getName()
{
	int len = this->asmPath.length();
	int begin;
	int end;
	for (int i = len; i >= 0; i--) {
		if (this->asmPath.at(i - 1) == '.') {
			end = i-1;
			continue;
		}
		if (this->asmPath.at(i - 1) == '\\') {
			begin = i - 1;
			break;
		}		
	}	
	return string(this->asmPath.substr(begin, end - begin));
}


bat::~bat()
{
}
