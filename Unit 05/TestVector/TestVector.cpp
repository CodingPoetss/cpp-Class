#include <vector>
#include <string>
#include <iostream>
#include"标头.h"
using std::string;
using std::vector;

int main() {
	//初始化并创建vector
	vector<string> words1{ "Hello","world!" };
	PRINT(words1);
	
	//删除最后一个元素
	words1.erase(words1.end() - 1);
	PRINT(words1);

	//尾部追加元素
	words1.push_back("emmmm");
	PRINT(words1);

	//用迭代器拷贝word1到words2
	vector words2(words1.begin()+1, words1.end());            //c++17不用重新定义类型名
	PRINT(words2);

	//在words2中插入元素(是插入到指定位置之前)
	words2.insert(words2.begin(), "Hello!");
	PRINT(words2);

	//拷贝构造的方式创建word3
	vector words3(words2);
	PRINT(words3);

	//用下标符修改元素
	words3[1] = "cpp";
	PRINT(words3);

	//创建并初始化含多个相同元素的vector
	vector<string> words4(5, "python");
	PRINT(words4);

	//交换
	words3.swap(words4);
	PRINT(words3);
	PRINT(words4);
	return 0;
}