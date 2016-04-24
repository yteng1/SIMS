#pragma once

#include<vector>
#include<string>
//using namespace System;
using namespace std;

class InputData
{
private:
	vector<string> v_type1;
	vector<string> v_type2;

public:
	InputData(){
		v_type1.push_back("DEF");
		v_type1.push_back("GHI");
		v_type1.push_back("JKL");
		v_type1.push_back("MNO");
		v_type1.push_back("PQR");
		v_type1.push_back("STU");
		v_type1.push_back("VWX");
		v_type1.push_back("YZ");
		v_type1.push_back("TLB");
		v_type1.push_back("LB");
		v_type1.push_back("FLB");
		v_type1.push_back("FDB");
		v_type1.push_back("FDOB");
		v_type2.push_back("VS");
		v_type2.push_back("SI");
		v_type2.push_back("I");
	};

	~InputData(){};

	vector<string> GetType1(){
		return v_type1;
	};

	vector<string> GetType2(){
		return v_type2;
	};

	/*void AddType1(String^ newtype){
		v_type1.pushback(newtype);
	};

	void AddType2(String^ newtype){
		v_type2.pushback(newtype);
	};*/

	int Size_Type1(){
		return v_type1.size();
	};
	int Size_Type2(){
		return v_type2.size();
	};
};
