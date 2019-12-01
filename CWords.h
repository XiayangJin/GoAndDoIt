#pragma once
#include <iostream>
using namespace std;

class CWords
{
	
public:
	CWords();
	~CWords();

	string m_sInputWords;
	string *m_sCaughtWords = new string[];
	string *m_sWords = new string[];

	void CatchWords(string m_sInputWords,string *m_sCaughtWords); //Catch all the words in the passage,may have some same words
	void GetWords(string *m_sCaughtWords,string *m_sWords); //Get all the different words from the caught words

};





