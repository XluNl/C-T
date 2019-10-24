// 传统c 在vs2013编译 需要加这个宏定义 不然包4996错误
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1 全局变量检测（成功）
int a;
int a = 10;

// 2 函数检测增强 (警告 必须需要返回值)
int getRetes(w, h){

}

// 3 类型转换增强
void test3(){
	char *p = malloc(sizeof(64));
}

// 4 struct 增强
struct Persion{
	int age;
	//void getage();//c语言struct不允许添加函数
};
void test4(){
	struct Persion p1;//使用的时候必须加入struct 关键字
}

// 5 bool 类型增强(c语言 无此类型)
//bool falg;

// 6 三目运算符增强
void test5(){
	int a = 10;
	int b = 20;
	printf("ret=%d\n",a>b?a:b);
	//a>b ? a : b =100 // 20=100
	// 模仿c++ 中的写法
	//*(a > b ? &a:&b)=100 // 20=100
}

// 7 const 常量
const int a_m = 20; //全局常量是不可以被修改的（c 中const会分配内存）
void test6(){
	//a_m = 30; 常量币可以修改
	// 但是可以通过指针修改(局部作用域下的常量 可以通过指针修改s)
	const int a_b = 20;
	int *p = (int *)&a_b;
	*p = 200;
	printf("*p=%d--a_m=%d",*p,a_b);//*p=200--a_m=200  发现被修改了

	//使用常量初始化数组(c语言不允许)
	//int arr[a_b];
}

int main(){
	//test5();
	test6();
	system("pause");
	return EXIT_FAILURE;
}