#include "stdafx.h"
#include "CSearch.h"


CSearch::CSearch()
{
}


CSearch::~CSearch()
{
}

vector<int> CSearch::GetWordsTimes(vector<string> &m_vsCaughtWords, vector<string> &m_vsWords){
	vector<int> vnWordsTimes;
	int nCounter = 0;
	for (int i = 0; i < m_vsWords.size(); i++){
		nCounter = 0;
		for (int j = 0; j < m_vsCaughtWords.size(); j++){
			if (m_vsWords[i] == m_vsCaughtWords[j]){
				nCounter++;
			}
		}
		vnWordsTimes.push_back(nCounter);
	}

	return vnWordsTimes;
}

vector<double> CSearch::GetWordsRate(vector<string> &m_vsCaughtWords, vector<int> &m_vnWordsTimes){
	vector<double> vdWordsRate;
	for (int i = 0; i < m_vnWordsTimes.size(); i++){
		vdWordsRate.push_back((double)m_vnWordsTimes[i]/m_vsCaughtWords.size());
	}

	return vdWordsRate;
}


