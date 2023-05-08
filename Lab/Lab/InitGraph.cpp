#include"InitGraph.h"



//��ʼ��

    InitGraph::InitGraph() {}
    InitGraph::InitGraph(int w, int h) :Width{ w }, Height{ h } {
        initgraph(w, h);
    }
    InitGraph::~InitGraph() {
        closegraph();
    }


    //����һ��������������������������ɫ
    void InitGraph::clean() {
        cleardevice();
    }
    void InitGraph::clean(COLORS c) {
        setbkcolor_f(c);
        cleardevice();
    }


    void InitGraph::setSize(int w, int h) {
        closegraph();
        initgraph(w, h);
        Width = w;
        Height = h;
    }

    int InitGraph::getWidth() {
        return Width;
    }

    int InitGraph::getHeight() {
        return Height;
    }

