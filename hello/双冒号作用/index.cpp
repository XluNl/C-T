
// 传统c 在vs2013编译 需要加这个宏定义 不然包4996错误
#define _CRT_SECURE_NO_WARNINGS

#include <iostream> //标准输入输出
#include "game1.h"
#include "game2.h"
using namespace std;

namespace A
{
	void function();
	int a=10;
	struct MyStruct
	{

	};
	class MyClass
	{
	};
	// 命名空间可以 嵌套
	namespace B
	{
		int m = 10;
	}
}
// 命名空间必须 在全局作用域下
// 命名空间可以嵌套
void test1(){
	cout << "输出B命名空间下的m" << A::B::m << endl;
}

// 命名空间是开放的  可以随时向命名空间添加内容
namespace A{ // 这个A命名空间 会和上面的A命名空间合并
	int m = 100;
    //int a = 200; // 命名空间下的变量 不能重复赋值
	int b = 1000;
}

void test2(){
	cout << "A::下的a=" << A::a << " A::下的b=" << A::b << " A::下的m="<<A::m << endl;
	// A::下的a=10 A::下的b=1000 A::下的m=100
}

// 无名 匿名命名空间
// 无名命名空间 里面的成员 相当于添加了static，只能在当前文件内使用
namespace {
	int a = 10;
	int b = 20;
}

// 命名空间其别名
namespace ver313213131313131{
	int a = 10;
}
void test3(){
	namespace verShor = ver313213131313131;
	cout << "输出ver313213131313131命名空间下的a" << verShor::a << endl;
}

// 命名空间下可以放 函数 变量 结构体 类
int main(){

	LOL::action();
	POP::action();
	
	test1();
	test2();
	test3();
	
	system("pause");
	return EXIT_SUCCESS;
}
