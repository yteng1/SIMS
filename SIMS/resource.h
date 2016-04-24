//{{NO_DEPENDENCIES}}
// Microsoft Visual C++ generated include file.
// Used by app.rc
#pragma once
	//using namespace System;

ref class SharedData
{

public:
	static System::String^ my_ip_addr;
	static System::String^ my_port;
	static System::String^ my_username;
	static System::String^ my_password;
	static System::String^ constring;

	static System::String^ type1=L"DEF" ;
	static System::String^ type2=L"SI" ;
	static System::String^ diameter= L"1.7";
	static System::String^ status=L"InStock";


	SharedData(void){
		my_ip_addr = L"192.168.1.153";
		my_port = L"3306";
		my_username =L"data entry";
		my_password = L"root";
		constring = L"datasource="+SharedData::my_ip_addr+";port="+SharedData::my_port+";username="+SharedData::my_username+";password="+SharedData::my_password+";";
	};

	static void UpdateSD(void){
		constring = L"datasource="+SharedData::my_ip_addr+";port="+SharedData::my_port+";username="+SharedData::my_username+";password="+SharedData::my_password+";";
	};

	template<typename T>
	static double setP(T arg,int size){//set precisions

		int temp1 = static_cast<int>(arg*(10^size));
		double temp2 = static_cast<double>(temp1)/(10^size);
		return temp2;

	}




};