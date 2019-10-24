// 传统c 在vs2013编译 需要加这个宏定义 不然包4996错误
#define _CRT_SECURE_NO_WARNINGS

#include <iostream> //标准输入输出
#include "game2.h"
using namespace std;

void POP::action(){

	cout << "POP Action" << endl;
}
