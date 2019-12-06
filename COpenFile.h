#pragma once
#include <iostream>
#include <vector>
using namespace std;
class COpenFile
{
public:
	COpenFile();             
	~COpenFile();

	//Varibles
	vector<string> m_vsInputWords;
	//Functions
	string OpenFile(char *sFileLct);
};



