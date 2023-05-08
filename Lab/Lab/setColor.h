#pragma once
#include <graphics.h>
#include <string>
#include<iostream>
using namespace ege;
using std::string;
using std::stoi;
using std::cout;
using std::endl;
using std::cin;

//��ɫ����(ͼ���඼�ü̳�)
class setColor {
private:
    //����static_cast��color_t��COLORS�����໥ת��
    color_t front{ 0 };       //ǰ��ɫ����ʾ���Ƶ���������ɫ�����߿�ɫ��ͬʱ����ʾ���ֵ���ɫ��
    color_t back{ 0xFCFCFC };        //����ɫ����ʾ������ɫ
    color_t words{ 0 };       //����ɫ����ʾ���ֱ���ɫ
    color_t filled{ 0 };      //���ɫ����䵽������״�е���ɫ�������ɫ
    bool stuff{ true };       //�Ƿ���䣿
public:
    setColor() ;
    setColor(color_t f, color_t b, color_t w, color_t fil, bool s);
    setColor(COLORS f, COLORS b, COLORS w, COLORS fil, bool s);

    void setFrameColor(color_t f);

    void setFilledColor(color_t fil);

    COLORS getFrameColor();
    

    COLORS getFilledColor();

    string getAllColor();
};