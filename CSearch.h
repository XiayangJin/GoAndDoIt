#pragma once
#include <vector>
using namespace std;

class CSearch
{
public:
	CSearch();
	~CSearch();

	//Varibles
	vector<int> m_vnWordsTimes;
	vector<double> m_vdWordsRate;
	//Functions
	vector<int> GetWordsTimes(vector<string> &m_vsCaughtWords,vector<string> &m_vsWords);
	vector<double> GetWordsRate(vector<string> &m_vsCaughtWords,vector<int> &m_vnWordsTimes);
};

