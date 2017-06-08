#include "stdafx.h"  //________________________________________ EjercicioGrupal12Prin.cpp
#include "EjercicioGrupal12Prin.h"

int APIENTRY wWinMain(HINSTANCE hInstance, HINSTANCE , LPTSTR cmdLine, int cmdShow){
	EjercicioGrupal12Prin app;
	return app.BeginDialog(IDI_EjercicioGrupal12Prin, hInstance);
}

void EjercicioGrupal12Prin::Window_Open(Win::Event& e)
{
}

void EjercicioGrupal12Prin::btJavier_Click(Win::Event& e)
{
	JavierDlg objDlg;
	objDlg.BeginDialog(hWnd);
}

void EjercicioGrupal12Prin::btFabi_Click(Win::Event& e)
{
}

void EjercicioGrupal12Prin::btJesus_Click(Win::Event& e)
{
}

void EjercicioGrupal12Prin::btAngel_Click(Win::Event& e)
{
}

