// ��ͳc ��vs2013���� ��Ҫ������궨�� ��Ȼ��4996����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 1 ȫ�ֱ�����⣨�ɹ���
int a;
int a = 10;

// 2 ���������ǿ (���� ������Ҫ����ֵ)
int getRetes(w, h){

}

// 3 ����ת����ǿ
void test3(){
	char *p = malloc(sizeof(64));
}

// 4 struct ��ǿ
struct Persion{
	int age;
	//void getage();//c����struct��������Ӻ���
};
void test4(){
	struct Persion p1;//ʹ�õ�ʱ��������struct �ؼ���
}

// 5 bool ������ǿ(c���� �޴�����)
//bool falg;

// 6 ��Ŀ�������ǿ
void test5(){
	int a = 10;
	int b = 20;
	printf("ret=%d\n",a>b?a:b);
	//a>b ? a : b =100 // 20=100
	// ģ��c++ �е�д��
	//*(a > b ? &a:&b)=100 // 20=100
}

// 7 const ����
const int a_m = 20; //ȫ�ֳ����ǲ����Ա��޸ĵģ�c ��const������ڴ棩
void test6(){
	//a_m = 30; �����ҿ����޸�
	// ���ǿ���ͨ��ָ���޸�(�ֲ��������µĳ��� ����ͨ��ָ���޸�s)
	const int a_b = 20;
	int *p = (int *)&a_b;
	*p = 200;
	printf("*p=%d--a_m=%d",*p,a_b);//*p=200--a_m=200  ���ֱ��޸���

	//ʹ�ó�����ʼ������(c���Բ�����)
	//int arr[a_b];
}

int main(){
	//test5();
	test6();
	system("pause");
	return EXIT_FAILURE;
}