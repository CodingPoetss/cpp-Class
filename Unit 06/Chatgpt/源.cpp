#include <iostream>
#include <string>

// ���ࣺ����
class Instrument {
public:
    virtual void play() = 0;
};

// ���ࣺ����
class Piano : public Instrument {
public:
    void play() override {
        std::cout << "Playing piano...\n";
    }
};

// ���ࣺ����
class Guitar : public Instrument {
public:
    void play() override {
        std::cout << "Playing guitar...\n";
    }
};

// ���ࣺ���ӹ�
class Drums : public Instrument {
public:
    void play() override {
        std::cout << "Playing drums...\n";
    }
};

// �����ࣺ��������
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
    // ʹ�ù����ഴ������
    Instrument* instrument1 = InstrumentFactory::createInstrument("piano");
    Instrument* instrument2 = InstrumentFactory::createInstrument("guitar");
    Instrument* instrument3 = InstrumentFactory::createInstrument("drums");

    // ���ö��󷽷�
    instrument1->play(); // Playing piano...   
    instrument2->play(); // Playing guitar...
    instrument3->play(); // Playing drums...

    // �ͷŶ����ڴ�
    delete instrument1;
    delete instrument2;
    delete instrument3;

    return 0;
}

/*
�����������У�Instrument�������������Ļ��࣬������һ�����麯��play()��
Piano��Guitar��Drums�ֱ���Instrument������࣬ʵ����play()������

InstrumentFactory�ǹ����࣬ͨ����̬����createInstrument()���ز�ͬ����������ʵ����
��main()�����У�����ʹ��InstrumentFactory�ഴ�����󲢵������ǵķ���������ͷŶ����ڴ档
*/