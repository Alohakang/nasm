#pragma once
#include<string>
#include<iostream>
#include<fstream>
using namespace std;
class ini
	/*��ȡini�ļ�*/
{
private:
	string nasmPath;
	string asmPath;
	string binPath;
public:
	ini();
	string getnasmPath(); 
	string getasmPath(); 
	string getbinPath(); 
	~ini();
};

