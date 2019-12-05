// MyFirstGoodProject.cpp : XiayangJin's 
//

#include "stdafx.h"
#include "CWords.h"
#include "CSearch.h"


int _tmain(int argc, _TCHAR* argv[])
{
	CWords title;
	CWords content;
	CSearch title;

	title.m_vsCaughtWords = title.CatchWords(title.m_sInputWords);
	title.m_vsWords = title.GetWords(title.m_vsCaughtWords);
	content.m_vsCaughtWords = content.CatchWords(content.m_sInputWords);
	content.m_vsWords = content.GetWords(content.m_vsCaughtWords);

	return 0;
}

