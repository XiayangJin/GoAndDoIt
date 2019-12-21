#include "stdafx.h"
#include "CWords.h"
#include <vector>
#include <algorithm> //To transform letters lower
#include <ctype.h>
#include <string>
#include <iostream>


CWords::CWords()
{
}


CWords::~CWords()
{
}

vector<string> CWords::CatchWords(string m_sInputWords){
	string sInputWords = m_sInputWords;
	vector<string> vsCaughtWords;
	int nLastLetterLct = 0;
	for (int i = 0; i < sInputWords.length();i++){
		if (!isalpha(sInputWords.substr(i, 1)[0])){
			//Erase all the punctions/spaces
			while (!isalpha(sInputWords.substr(i, 1)[0])){
				sInputWords.erase(i, 1);
			};
			//Catch the words into the vector
			string temp = sInputWords.substr(nLastLetterLct, i - nLastLetterLct);
			vsCaughtWords.push_back(temp);
			nLastLetterLct = i;
		}
	}
	return vsCaughtWords;
}

vector<string> CWords::GetWords(vector<string> &m_vsCaughtWords){
	vector<string> vsWords;
	vsWords.push_back(m_vsCaughtWords[0]);
	for (int i = 0; i < m_vsCaughtWords.size(); i++){
		if (find(vsWords.begin(), vsWords.end(), m_vsCaughtWords[i]) == vsWords.end()){
			vsWords.push_back(m_vsCaughtWords[i]);
		}
	}
	return vsWords;
}



