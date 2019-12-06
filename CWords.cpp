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
		if ((!((sInputWords.substr(i, 1) >= "a" && sInputWords <= "z") || (sInputWords.substr(i, 1) >= "A" && sInputWords <= "Z"))) 
			|| sInputWords.substr(i, 1) == "\n"
			|| ispunct(stoi(sInputWords.substr(i, 1)))){
			do{
				sInputWords.erase(i,1);
			} while ((!((sInputWords.substr(i, 1) >= "a" && sInputWords <= "z") || (sInputWords.substr(i, 1) >= "A" && sInputWords <= "Z"))) ||  sInputWords.substr(i,1) == "\n");
			string temp = sInputWords.substr(nLastLetterLct, i - nLastLetterLct);
			transform(temp.begin(),temp.end(),temp.begin(),::tolower);
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



