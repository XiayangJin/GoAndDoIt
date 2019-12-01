#include "stdafx.h"
#include "CWords.h"
#include <vector>
#include <iostream>


CWords::CWords()
{
}


CWords::~CWords()
{
}

vector<string> CWords::CatchWords(string m_vsInputWords){
	vector<string> vsCaughtWords;
	int nLastLetterLc = 0;
	for (int i = 0; i < m_vsInputWords.length();i++){
		if ((m_vsInputWords.substr(i, 1) >= "a" && m_vsInputWords <= "z") || (m_vsInputWords.substr(i, 1) >= "A" && m_vsInputWords <= "Z")){}
		else{
			vsCaughtWords.push_back(m_vsInputWords.substr(nLastLetterLc,i-nLastLetterLc));
			nLastLetterLc = i;
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



