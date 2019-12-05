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
	for (int i = 0; i < sizeof(m_vsWords); i++){
		nCounter = 0;
		for (int j = 0; j < sizeof(m_vsCaughtWords); j++){
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
	for (int i = 0; i < sizeof(m_vnWordsTimes); i++){
		vdWordsRate.push_back(m_vnWordsTimes[i]/sizeof(m_vsCaughtWords));
	}

	return vdWordsRate;
}


