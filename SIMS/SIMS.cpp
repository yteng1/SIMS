// SIMS.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"
#include "INI.h"
#include "fcs.h"
#include <io.h>

using namespace SIMS;

[System::STAThreadAttribute]
int main()
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	if(_access(".\\config.ini",0)==0)
	{
		INI::RetriveStyle();
		fcs::Hex2Col();
	}
	else {
		fcs::Col2Hex();
		INI::SaveStyle();
	}

	//Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}


