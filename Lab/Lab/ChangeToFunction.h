#pragma once
#include <graphics.h>
#include<string>
using std::string;
using namespace ege;

//ת����--���ַ���ת��Ϊ��ɫ��
COLORS ChangeToColor(char str[]) {
	string s = str;
	if (s == "BLACK"||s=="black") { return BLACK; }
	if(s=="BLUE"||s=="blue") { return BLUE; }
	if (s == "GREEN"||s=="green") { return GREEN; }
	if (s == "CYAN"||s=="cyan") { return CYAN; }
	if (s == "RED"||s=="red") { return RED; }
	if (s == "MAGENTA"||s=="magenta") { return MAGENTA; }
	if (s == "BROWN"||s=="brown") { return BROWN; }
	if (s == "LIGHTGRAY"||s=="lightgray") { return LIGHTGRAY; }
	if (s == "DARKGRAY"||s=="darkgray") { return DARKGRAY; }
	if (s == "LIGHTBLUE"||s=="lightblue") { return LIGHTBLUE; }
	if (s == "LIGHTGREEN"||s=="lightgreen") { return LIGHTGREEN; }
	if (s == "LIGHTCYAN" || s=="lightcyan") { return LIGHTCYAN; }
	if (s == "LIGHTRED" || s=="lightred") { return LIGHTRED; }
	if (s == "LIGHTMAGENTA" || s=="lightmagenta") { return LIGHTMAGENTA; }
	if (s == "YELLOW" || s=="yellow") { return YELLOW; }
	if (s == "WHITE" || s=="white") { return WHITE; }
}


//ת����--���ַ���ת��Ϊ������
int ChangeToInteger(char str[]) {
	string s = str;
	return stoi(s);
}

//ת����--���ַ���ת��Ϊ��������
bool ChangeToBool(char str[]) {
	string s = str;
	if (s == "no") { return false; }
	else { return true; }
}
