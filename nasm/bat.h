#pragma once
#include<string>
#include<iostream>
#include<fstream>
#include"ini.h"
using namespace std;
class bat
{
private:
	ini i;
	string nasmPath;
	string asmPath;
	string binPath;
public:
	bat();

	~bat();
};

