
#include "stdafx.h"

#include <stdio.h>
#include <locale.h>
#include <tchar.h>


const char* psa = "A_Welcome_�gӭ.";	//!< Narrow char string.
const wchar_t* psw = L"W_Welcome_�gӭ.";	//!< Wide char string.

int _tmain(int argc, _TCHAR* argv[])
{
	// init.
	setlocale(LC_ALL, "");	// ʹ�ÿͻ�������ȱʡlocale.

	// title.
	_tprintf(_T("zlatlcv v1.0 (%dbit)\n"), (int)(8*sizeof(int*)));
	_tprintf(_T("\n"));

	// printf.
	fflush(stdout);
	printf("printf A:\t%s\n", psa);
	printf("printf W:\t%ls\n", psw);

	// _tprintf.
	CA2CT psat(psa);
	CW2CT pswt(psw);
	fflush(stdout);
	_tprintf(_T("_tprintf A:\t%s\n"), psat);
	_tprintf(_T("_tprintf W:\t%s\n"), pswt);

	return 0;
}

