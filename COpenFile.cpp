#include "stdafx.h"
#include "COpenFile.h"
#include <algorithm>


COpenFile::COpenFile()
{
}


COpenFile::~COpenFile()
{
}

string COpenFile::OpenFile(char *sFileLct){
	FILE * hFile01 = NULL;
	fopen_s(&hFile01, (sFileLct), ("r")); 
	if (hFile01 == NULL) {
		return "******";
	}
	fseek(hFile01, 0, SEEK_END);
	int nSize = ftell(hFile01);
	fseek(hFile01, 0, SEEK_SET);

	char * pBuff = new char[nSize+1];
	pBuff[nSize] = 0;
	fread(pBuff, nSize, 1, hFile01);
	fclose(hFile01);

	string sInputWords = pBuff;
	transform(sInputWords.begin(), sInputWords.end(), sInputWords.begin(), ::tolower);
	delete pBuff;
	return sInputWords;
}







