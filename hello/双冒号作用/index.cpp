
// ��ͳc ��vs2013���� ��Ҫ������궨�� ��Ȼ��4996����
#define _CRT_SECURE_NO_WARNINGS

#include <iostream> //��׼�������
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
	// �����ռ���� Ƕ��
	namespace B
	{
		int m = 10;
	}
}
// �����ռ���� ��ȫ����������
// �����ռ����Ƕ��
void test1(){
	cout << "���B�����ռ��µ�m" << A::B::m << endl;
}

// �����ռ��ǿ��ŵ�  ������ʱ�������ռ��������
namespace A{ // ���A�����ռ� ��������A�����ռ�ϲ�
	int m = 100;
    //int a = 200; // �����ռ��µı��� �����ظ���ֵ
	int b = 1000;
}

void test2(){
	cout << "A::�µ�a=" << A::a << " A::�µ�b=" << A::b << " A::�µ�m="<<A::m << endl;
	// A::�µ�a=10 A::�µ�b=1000 A::�µ�m=100
}

// ���� ���������ռ�
// ���������ռ� ����ĳ�Ա �൱�������static��ֻ���ڵ�ǰ�ļ���ʹ��
namespace {
	int a = 10;
	int b = 20;
}

// �����ռ������
namespace ver313213131313131{
	int a = 10;
}
void test3(){
	namespace verShor = ver313213131313131;
	cout << "���ver313213131313131�����ռ��µ�a" << verShor::a << endl;
}

// �����ռ��¿��Է� ���� ���� �ṹ�� ��
int main(){

	LOL::action();
	POP::action();
	
	test1();
	test2();
	test3();
	
	system("pause");
	return EXIT_SUCCESS;
}
