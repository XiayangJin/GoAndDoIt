#include "stdafx.h"
#include "CWords.h"


CWords::CWords()
{
}


CWords::~CWords()
{
}

void CWords::CatchWords(string m_sInputWords,string *m_sCaughtWords){
	string *sCaughtWords = new string[];
	int nNowWordsCounter = 0;
	int nLastLetterLc = 0;
	for (int i = 0; i < m_sInputWords.length();i++){
		if ((m_sInputWords.substr(i, 1) >= "a" && m_sInputWords <= "z") || (m_sInputWords.substr(i, 1) >= "A" && m_sInputWords <= "Z")){
			sCaughtWords[nNowWordsCounter] = m_sInputWords.substr(nLastLetterLc,i-nLastLetterLc);
			nNowWordsCounter++ ;
			nLastLetterLc = i;
		}
	}
	m_sCaughtWords = sCaughtWords;

	delete sCaughtWords;
}

void CWords::GetWords(string *m_sCaughtWords,string *m_sWords){
	int nNowWordsCounter = 0;
	for (int i = 0; i < sizeof(m_sCaughtWords); i++){
		for (int j = 0; j < nNowWordsCounter; j++){
			if (m_sCaughtWords[i] != m_sWords[j]){
				m_sWords[nNowWordsCounter;
			}
		}
	}
}



