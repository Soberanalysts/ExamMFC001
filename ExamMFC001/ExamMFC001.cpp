
// ExamMFC001.cpp: 애플리케이션에 대한 클래스 동작을 정의합니다.
//

#include "pch.h"
#include "framework.h"
#include "ExamMFC001.h"
#include "ExamMFC001Dlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CExamMFC001App

BEGIN_MESSAGE_MAP(CExamMFC001App, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CExamMFC001App 생성

CExamMFC001App::CExamMFC001App()
{
	// TODO: 여기에 생성 코드를 추가합니다.
	// InitInstance에 모든 중요한 초기화 작업을 배치합니다.
}


// 유일한 CExamMFC001App 개체입니다.

CExamMFC001App theApp;


// CExamMFC001App 초기화

BOOL CExamMFC001App::InitInstance()
{
	CWinApp::InitInstance();

		
	CExamMFC001Dlg dlg;
	m_pMainWnd = &dlg;
	dlg.DoModal();
	
	return FALSE;
}

