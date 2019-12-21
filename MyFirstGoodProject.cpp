// MyFirstGoodProject.cpp : XiayangJin's 
//

#include "stdafx.h"
#include "CWords.h"
#include "CSearch.h"
#include "COpenFile.h"
#include <string> //To cout strings


int _tmain(int argc, _TCHAR* argv[])
{
	COpenFile inputTitle;
	COpenFile inputContent;
	CWords title;
	CWords content;
	CSearch searchTitle;
	CSearch searchContent;

	title.m_sInputWords = inputTitle.OpenFile("D:\\MyFirstGoodProject\\title\\title01.txt");
	content.m_sInputWords = inputContent.OpenFile("D:\\MyFirstGoodProject\\content\\content01.txt");
	title.m_vsCaughtWords = title.CatchWords(title.m_sInputWords);
	title.m_vsWords = title.GetWords(title.m_vsCaughtWords);
	content.m_vsCaughtWords = content.CatchWords(content.m_sInputWords);
	content.m_vsWords = content.GetWords(content.m_vsCaughtWords);
	searchTitle.m_vnWordsTimes = searchTitle.GetWordsTimes(title.m_vsCaughtWords,title.m_vsWords);
	searchTitle.m_vdWordsRate = searchTitle.GetWordsRate(content.m_vsCaughtWords,searchTitle.m_vnWordsTimes);

	for (int i = 0; i < title.m_vsWords.size(); i++){
		cout << title.m_vsWords[i] << "  " 
			 << searchTitle.m_vnWordsTimes[i]<<"  "
			 << searchTitle.m_vdWordsRate[i]<<endl;
	}

	getchar();
	return 0;
}

