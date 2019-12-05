// MyFirstGoodProject.cpp : XiayangJin's 
//

#include "stdafx.h"
#include "CWords.h"
#include "CSearch.h"
#include <string> //To cout strings


int _tmain(int argc, _TCHAR* argv[])
{
	CWords title;
	CWords content;
	CSearch searchTitle;
	CSearch searchContent;

	title.m_sInputWords = "a good boy ";
	content.m_sInputWords = "a good boy called ben ";

	title.m_vsCaughtWords = title.CatchWords(title.m_sInputWords);
	title.m_vsWords = title.GetWords(title.m_vsCaughtWords);
	content.m_vsCaughtWords = content.CatchWords(content.m_sInputWords);
	content.m_vsWords = content.GetWords(content.m_vsCaughtWords);
	searchTitle.m_vnWordsTimes = searchTitle.GetWordsTimes(title.m_vsCaughtWords,title.m_vsWords);
	searchTitle.m_vdWordsRate = searchTitle.GetWordsRate(title.m_vsCaughtWords,searchTitle.m_vnWordsTimes);
	searchContent.m_vnWordsTimes = searchContent.GetWordsTimes(content.m_vsCaughtWords, content.m_vsWords);
	searchContent.m_vdWordsRate = searchContent.GetWordsRate(content.m_vsCaughtWords, searchContent.m_vnWordsTimes);

	for (int i = 0; i < title.m_vsWords.size(); i++){
		cout << title.m_vsWords[i] << "  " 
			 << searchTitle.m_vnWordsTimes[i]<<"  "
			 << searchTitle.m_vdWordsRate[i]<<endl;
	}

	getchar();
	return 0;
}

