#include<iostream>
#include<string>
#include<fstream>//文件读写头文件
#include "ini.h"
using namespace std;
int main() {
	ini i;
	cout << i.getasmPath() << endl;
	cout << i.getbinPath() << endl;
	cout << i.getnasmPath() << endl;
	return 0;
}