#pragma once
#include "INI.h"
#include <msclr\marshal_cppstd.h>

using namespace System::Drawing;

public ref class fcs{

public:
	static Color Form_BG_Color = SystemColors::GradientActiveCaption;
	static Color Form_BG_Font_Color = SystemColors::ControlText;
	static Color Form_BUTT_Color = SystemColors::ControlText;
	static Color Form_BUTT_Font_Color = SystemColors::ControlLightLight;
	static Color Form_Menu_BG_Color = Color::Black;
	static Color Form_Menu_Font_Color = SystemColors::ControlLightLight;
	static Color Form_Font_Color = SystemColors::ControlText;


public:
	static void Hex2Col(void){
		System::String^ c1 = gcnew System::String(FS::BG_Color.c_str());
		Form_BG_Color = ColorTranslator::FromHtml(c1);
		System::String^ c2 = gcnew System::String(FS::BG_Font_Color.c_str());
		Form_BG_Font_Color = ColorTranslator::FromHtml(c2);
		System::String^ c3 = gcnew System::String(FS::BT_Color.c_str());
		Form_BUTT_Color = ColorTranslator::FromHtml(c3);
		System::String^ c4 = gcnew System::String(FS::BT_Font_Color.c_str());
		Form_BUTT_Font_Color = ColorTranslator::FromHtml(c4);
		System::String^ c5 = gcnew System::String(FS::MN_BG_Color.c_str());
		Form_Menu_BG_Color = ColorTranslator::FromHtml(c5);
		System::String^ c6 = gcnew System::String(FS::MN_Font_Color.c_str());
		Form_Menu_Font_Color = ColorTranslator::FromHtml(c6);
		System::String^ c7 = gcnew System::String(FS::Font_Color.c_str());
		Form_Font_Color = ColorTranslator::FromHtml(c7);
	}

	static void Col2Hex(void) {
		FS::BG_Color = msclr::interop::marshal_as<std::string>(ColorTranslator::ToHtml(Form_BG_Color));
		FS::BG_Font_Color = msclr::interop::marshal_as<std::string>(ColorTranslator::ToHtml(Form_BG_Font_Color));
		FS::BT_Color = msclr::interop::marshal_as<std::string>(ColorTranslator::ToHtml(Form_BUTT_Color));
		FS::BT_Font_Color = msclr::interop::marshal_as<std::string>(ColorTranslator::ToHtml(Form_BUTT_Font_Color));
		FS::MN_BG_Color = msclr::interop::marshal_as<std::string>(ColorTranslator::ToHtml(Form_Menu_BG_Color));
		FS::MN_Font_Color = msclr::interop::marshal_as<std::string>(ColorTranslator::ToHtml(Form_Menu_Font_Color));
		FS::Font_Color = msclr::interop::marshal_as<std::string>(ColorTranslator::ToHtml(Form_Font_Color));
	}


};