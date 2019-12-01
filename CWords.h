#pragma once
#include <iostream>
#include <vector>
using namespace std;

class CWords
{
	
public:
	CWords();
	~CWords();

	string m_sInputWords;
	vector<string> m_vsCaughtWords;
	vector<string> m_vsWords;

	vector<string> CatchWords(string m_vsInputWords); //Catch all the words in the passage,may have some same words
	vector<string> GetWords(vector<string> &m_vsCaughtWords); //Get all the different words from the caught words

};





