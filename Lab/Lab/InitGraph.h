#pragma once
//��ʼ��
#include <graphics.h>
class InitGraph {
private:
    int Width{ 0 };
    int Height{ 0 };

public:
    InitGraph();
    InitGraph(int w, int h);
    
~InitGraph();
    

    //����һ��������������������������ɫ
void clean();
void clean(COLORS c);


void setSize(int w, int h);

int getWidth();

int getHeight();
  

};