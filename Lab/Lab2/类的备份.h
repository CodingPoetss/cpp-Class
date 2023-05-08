#pragma once
/*
//��ʼ��
class InitGraph {
private:
    int Width{ 0 };
    int Height{ 0 };

public:
    InitGraph() {}
    InitGraph(int w, int h) :Width{ w }, Height{ h } {
        initgraph(w, h);
    }
    ~InitGraph() {
        closegraph();
    }


    //����һ��������������������������ɫ
    void clean() {
        cleardevice();
    }
    void clean(COLORS c) {
        setbkcolor_f(c);
        cleardevice();
    }


    void setSize(int w,int h){
        closegraph();
        initgraph(w, h);
        Width = w;
        Height = h;
    }

    int getWidth() {
        return Width;
     }

    int getHeight() {
        return Height;
    }

};



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
    setColor() {};
    setColor(color_t f, color_t b, color_t w, color_t fil, bool s) :front{ f }, back{ b }, words{ w }, filled{ fil }, stuff{ s } {
        setcolor(f);
        setbkcolor(b);
        setfontbkcolor(w);
        if (stuff) {
            setfillcolor(fil);
        }
        else {
            setfillcolor(back);
        }
    }
    setColor(COLORS f, COLORS b, COLORS w,COLORS fil,bool s) : setColor(static_cast<color_t>(f),static_cast<color_t>(b),      //������
         static_cast<color_t>(w),static_cast<color_t>(fil),s ){}

    void setFrameColor(color_t f) {
        front = f;
    }

    void setFilledColor(color_t fil) {
        front = fil;
    }

    COLORS getFrameColor() {
        return static_cast<COLORS>(front);
    }

    COLORS getFilledColor() {
        return static_cast<COLORS>(filled);
    }

    string getAllColor() {
        return "The FrameColor is:" + std::to_string(static_cast<COLORS>(front)) + '\n' +
            "The FilledColor is:" + std::to_string(static_cast<COLORS>(filled)) +" Filled? "+std::to_string(stuff) + '\n' +
            "The BackgroundColor is:" + std::to_string(static_cast<COLORS>(back)) + '\n';
    }
};



//����
class Dot {
private:
    int x{0};
    int y{0};
public:
    Dot() {}
    Dot(int x, int y) {
        this->x = x;
        this->y = y;
    }
    int getX() { return x; }
    int getY() { return y; }
    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }
    void getCoordinate() {
        std::cout<< '(' + std::to_string(x) + ',' + std::to_string(y) + ')' + '\n';
    }
};



//����Բ��
class setCircle:public setColor {
private:
    int x{0};
    int y{0};
    int radius{ 0 };
    setColor circle_color{};
public:
    setCircle() {}
    setCircle(int x_, int y_, int r_, setColor c) :x{ x_ }, y{ y_ }, radius{ r_ }, circle_color{c} {
        setlinestyle(NULL_LINE);
        pieslice(x_, y_, 0, 0, r_);
        setlinestyle(SOLID_LINE);
        circle(x_, y_, r_);

    }

    void setX(int x) { this->x = x; }
    void setY(int y) { this->y = y; }
    void setRadius(int radius) { this->radius = radius; }
    int getX() { return x; }
    int getY() { return y; }
    int getRadius() { return radius; }
    string getCircleInfo() {
        return "X is:" + std::to_string(x) + " Y is:" + std::to_string(y) + " R is:" + std::to_string(radius)+'\n';
    }
    string getCircleColor(){
        return getCircleInfo() + circle_color.getAllColor();
    }
};


//�������
class setRectangle :public Dot,setColor{
private:
    Dot dot1{};
    Dot dot2{};
    setColor rectangle_color{};

public:
    setRectangle(){}
    setRectangle(Dot d1, Dot d2, setColor c) :dot1{ d1 }, dot2{ d2 }, rectangle_color{c}{
        bar(d1.getX(), d1.getY(), d2.getX(), d2.getY());
        rectangle(d1.getX(), d1.getY(), d2.getX(), d2.getY());
    }

    void setDot1(Dot d1) { dot1 = d1; }
    void setDot2(Dot d2) { dot2 = d2; }
    Dot getDot1() { return dot1; }
    Dot getDot2() { return dot2; }

};


//�߶���
class setLine:public Dot {
private:
    Dot dot1{};
    Dot dot2{};
public:
    setLine() {}
    setLine(Dot d1, Dot d2) :dot1{ d1 }, dot2{ d2 }{
        line(d1.getX(), d1.getY(), d2.getX(), d2.getY());
    }

    void setDot1(Dot d1) { dot1 = d1; }
    void setDot2(Dot d2) { dot2 = d2; }
    Dot getDot1() { return dot1; }
    Dot getDot2() { return dot2; }
};



//��������
class setTriangle:public Dot,setLine,setColor{
private:
    setLine line1;
    setLine line2;
    setLine line3;
    setColor color;
public:
    setTriangle(){}
    setTriangle(Dot d1, Dot d2, Dot d3, setColor c) :color{ c } {
        setLine{ d1,d2 };
        setLine{ d2,d3 };
        setLine{ d3,d1 };

    }
};

*/