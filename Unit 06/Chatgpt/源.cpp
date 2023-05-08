#include <iostream>
#include <string>

// 基类：乐器
class Instrument {
public:
    virtual void play() = 0;
};

// 子类：钢琴
class Piano : public Instrument {
public:
    void play() override {
        std::cout << "Playing piano...\n";
    }
};

// 子类：吉他
class Guitar : public Instrument {
public:
    void play() override {
        std::cout << "Playing guitar...\n";
    }
};

// 子类：架子鼓
class Drums : public Instrument {
public:
    void play() override {
        std::cout << "Playing drums...\n";
    }
};

// 工厂类：乐器工厂
class InstrumentFactory {
public:
    static Instrument* createInstrument(const std::string& instrumentType) {
        if (instrumentType == "piano") {
            return new Piano();
        }
        else if (instrumentType == "guitar") {
            return new Guitar();
        }
        else if (instrumentType == "drums") {
            return new Drums();
        }
        else {
            return nullptr;
        }
    }
};

int main() {
    // 使用工厂类创建对象
    Instrument* instrument1 = InstrumentFactory::createInstrument("piano");
    Instrument* instrument2 = InstrumentFactory::createInstrument("guitar");
    Instrument* instrument3 = InstrumentFactory::createInstrument("drums");

    // 调用对象方法
    instrument1->play(); // Playing piano...   
    instrument2->play(); // Playing guitar...
    instrument3->play(); // Playing drums...

    // 释放对象内存
    delete instrument1;
    delete instrument2;
    delete instrument3;

    return 0;
}

/*
在上述代码中，Instrument类是所有乐器的基类，定义了一个纯虚函数play()。
Piano、Guitar和Drums分别是Instrument类的子类，实现了play()方法。

InstrumentFactory是工厂类，通过静态方法createInstrument()返回不同类型乐器的实例。
在main()函数中，我们使用InstrumentFactory类创建对象并调用它们的方法，最后释放对象内存。
*/