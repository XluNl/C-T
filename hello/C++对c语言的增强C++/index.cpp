// 传统c 在vs2013编译 需要加这个宏定义 不然包4996错误
#define _CRT_SECURE_NO_WARNINGS

#include <iostream> 
using namespace std;

// 1 全局变量检测（失败 a重复定义）
//int a;
int a = 10;

// 2 函数检测增强 (直接error w,h未声明，参数类型增强，返回值增强)
int getRetes(int w,int h){
	return EXIT_FAILURE;
}

// 3 类型转换增强
void test3(){
	char *p = (char*)malloc(sizeof(64));//malloc 返回的是void*
}

// 4 struct 增强
struct Persion{
	int age;
	void getage(){ age++; };//c++语言struct不允许添加函数
};
void test4(){
	Persion p1;//可以不用struct 关键字
	p1.age = 10;
	p1.getage();
	cout << p1.age << endl;
}

// 5 bool 类型增强
bool falg;

// 6 三目运算符增强
void test5(){
	int a = 10;
	int b = 20;
	printf("ret=%d\n", a>b ? a : b=100);
	//(a>b ? a : b)=100 // a=10,b=100  c++ 中返回的是变量
}

// 7 const 常量  （c++ 中const不会分配内存  常量放在一个符号表中）
void test6(){
	// 但是可以通过指针修改(局部作用域下的常量 可以通过指针修改s)
	const int a_b = 20;
	int *p = (int *)&a_b;
	*p = 200;
	printf("*p=%d--a_m=%d", *p, a_b);//*p=200--a_m=20 （发现常量a_b并没有被修改）

	//使用常量初始化数组
	int arr[a_b];
}
	

int main(){
	test6();
	system("pause");
	return EXIT_SUCCESS;
}