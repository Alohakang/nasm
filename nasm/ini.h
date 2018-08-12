#pragma once
#include<string>
#include<iostream>
#include<fstream>
using namespace std;
class ini
	/*¶ÁÈ¡iniÎÄ¼ş*/
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

