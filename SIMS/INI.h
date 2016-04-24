#pragma once
#include <windows.h>
#include <iostream>

namespace FS {

	static std::string BG_Color;
	static std::string BG_Font_Color;
	static std::string BT_Color;
	static std::string BT_Font_Color;
	static std::string MN_BG_Color;
	static std::string MN_Font_Color;
	static std::string Font_Color;

};


public ref class INI{

public:

	static void SaveStyle(void){
			
		try{

			WritePrivateProfileStringA("FormStyle","Form_BG_Color",FS::BG_Color.c_str(),".\\config.ini"); 
			WritePrivateProfileStringA("FormStyle","Form_BG_Font_Color",FS::BG_Font_Color.c_str(),".\\config.ini"); 
			WritePrivateProfileStringA("FormStyle","Form_BUTT_Color",FS::BT_Color.c_str(),".\\config.ini"); 
			WritePrivateProfileStringA("FormStyle","Form_BUTT_Font_Color",FS::BT_Font_Color.c_str(),".\\config.ini"); 
			WritePrivateProfileStringA("FormStyle","Form_Menu_BG_Color",FS::MN_BG_Color.c_str(),".\\config.ini"); 
			WritePrivateProfileStringA("FormStyle","Form_Menu_Font_Color",FS::MN_Font_Color.c_str(),".\\config.ini"); 
			WritePrivateProfileStringA("FormStyle","Form_Font_Color",FS::Font_Color.c_str(),".\\config.ini"); 

		
		}
		catch(System::Exception^ ex){System::Windows::Forms::MessageBox::Show(ex->Message);}
	
	}

	static void RetriveStyle(void){
	
		try{

			GetPrivateProfileStringA("FormStyle","Form_BG_Color","",(LPSTR)FS::BG_Color.c_str(),16,".\\config.ini"); 
			GetPrivateProfileStringA("FormStyle","Form_BG_Font_Color","", (LPSTR)FS::BG_Font_Color.c_str(),16,".\\config.ini");
			GetPrivateProfileStringA("FormStyle","Form_BUTT_Color","", (LPSTR)FS::BT_Color.c_str(),16,".\\config.ini");
			GetPrivateProfileStringA("FormStyle","Form_BUTT_Font_Color","", (LPSTR)FS::BT_Font_Color.c_str(),16,".\\config.ini");
			GetPrivateProfileStringA("FormStyle","Form_Menu_BG_Color","", (LPSTR)FS::MN_BG_Color.c_str(),16,".\\config.ini");
			GetPrivateProfileStringA("FormStyle","Form_Menu_Font_Color","", (LPSTR)FS::MN_Font_Color.c_str(),16,".\\config.ini");
			GetPrivateProfileStringA("FormStyle","Form_Font_Color","", (LPSTR)FS::Font_Color.c_str(),16,".\\config.ini");

		}
		catch(System::Exception^ ex){System::Windows::Forms::MessageBox::Show(ex->Message);}
	
	
	
	}

};


