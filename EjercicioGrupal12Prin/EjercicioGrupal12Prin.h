#pragma once  //______________________________________ EjercicioGrupal12Prin.h  
#include "Resource.h"
#include "AngelDlg.h"
class EjercicioGrupal12Prin: public Win::Dialog
{
public:
	EjercicioGrupal12Prin()
	{
	}
	~EjercicioGrupal12Prin()
	{
	}
protected:
	//______ Wintempla GUI manager section begin: DO NOT EDIT AFTER THIS LINE
	Win::Button btJavier;
	Win::Button btFabi;
	Win::Button btJesus;
	Win::Button btAngel;
protected:
	Win::Gdi::Font fontArial009A;
	void GetDialogTemplate(DLGTEMPLATE& dlgTemplate)
	{
		dlgTemplate.cx=Sys::Convert::CentimetersToDlgUnitX(17.14500);
		dlgTemplate.cy=Sys::Convert::CentimetersToDlgUnitY(3.14854);
		dlgTemplate.style = WS_CAPTION | WS_POPUP | WS_SYSMENU | WS_VISIBLE | DS_CENTER | DS_MODALFRAME;
	}
	//_________________________________________________
	void InitializeGui()
	{
		this->Text = L"EjercicioGrupal12Prin";
		btJavier.CreateX(NULL, L"Javier", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 0.47625, 2.24896, 3.20146, 0.68792, hWnd, 1000);
		btFabi.CreateX(NULL, L"Fabi", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 4.47146, 2.27542, 3.67771, 0.68792, hWnd, 1001);
		btJesus.CreateX(NULL, L"Jesus", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 8.75771, 2.16958, 3.78354, 0.68792, hWnd, 1002);
		btAngel.CreateX(NULL, L"Angel", WS_CHILD | WS_TABSTOP | WS_VISIBLE | BS_PUSHBUTTON | BS_CENTER | BS_VCENTER, 13.36146, 2.27542, 3.59833, 0.68792, hWnd, 1003);
		fontArial009A.CreateX(L"Arial", 0.317500, false, false, false, false);
		btJavier.Font = fontArial009A;
		btFabi.Font = fontArial009A;
		btJesus.Font = fontArial009A;
		btAngel.Font = fontArial009A;
	}
	//_________________________________________________
	void btJavier_Click(Win::Event& e);
	void btFabi_Click(Win::Event& e);
	void btJesus_Click(Win::Event& e);
	void btAngel_Click(Win::Event& e);
	void Window_Open(Win::Event& e);
	//_________________________________________________
	bool EventHandler(Win::Event& e)
	{
		if (btJavier.IsEvent(e, BN_CLICKED)) {btJavier_Click(e); return true;}
		if (btFabi.IsEvent(e, BN_CLICKED)) {btFabi_Click(e); return true;}
		if (btJesus.IsEvent(e, BN_CLICKED)) {btJesus_Click(e); return true;}
		if (btAngel.IsEvent(e, BN_CLICKED)) {btAngel_Click(e); return true;}
		return false;
	}
};
