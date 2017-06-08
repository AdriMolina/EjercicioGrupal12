#pragma once   //_____________________________________________ Ejercicio12Dgl.h  
#include "resource.h"

class Ejercicio12Dgl: public Win::Dialog
{
public:
	Ejercicio12Dgl()
	{
	}
	~Ejercicio12Dgl()
	{
	}
private:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Button btClick;
	Win::Textbox tbxText;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(13.49375);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(5.26521);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		btClick.CreateX(NULL, L"Click", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 9.23396, 4.39208, 3.65125, 0.68792, hWnd, 1000);
		tbxText.CreateX(WS_EX_CLIENTEDGE, NULL, WS_CHILD | WS_TABSTOP | WS_VISIBLE | ES_AUTOHSCROLL | ES_LEFT | ES_WINNORMALCASE, 9.15458, 2.30187, 4.15396, 0.60854, hWnd, 1001);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		btClick.Font = fontArial009A;
		tbxText.Font = fontArial009A;
	}
	//_________________________________________________
	void btClick_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btClick.IsEvent(e, BN_CLICKED)) {btClick_Click(e); return true;}
		return false;
	}
};
