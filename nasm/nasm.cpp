#include<iostream>
#include<string>
#include<fstream>//�ļ���дͷ�ļ�
#include "ini.h"
using namespace std;
int main() {
	ini i;
	cout << i.getasmPath() << endl;
	cout << i.getbinPath() << endl;
	cout << i.getnasmPath() << endl;
	return 0;
}