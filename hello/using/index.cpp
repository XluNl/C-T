// ��ͳc ��vs2013���� ��Ҫ������궨�� ��Ȼ��4996����
#define _CRT_SECURE_NO_WARNINGS

#include <iostream> 
using namespace std;

namespace songwukong{
	int ccid = 10;
}

void test1(){
	int ccid = 50;
	// д��using �� Ŀ��������ʹ�� songwukong �µ�ccid������ccid ���������
	// ���Ǳ����� ���оͽ�ԭ��
	// ���Ծʹ��ڶ���������
	//using songwukong::ccid;
	cout << "ccid=" << ccid << endl;
}

namespace LOL{
	int ccid = 40;
}
// using ����ָ��
void test2(){
	//int ccid = 20;

	// ���������� ccidע��  �ͻ�ʹ��songwukong ���ccid
	using namespace songwukong;
	
	//using namespace LOL;
	// ������� ��������ռ�  ��Ҫ��ȷָ�������ռ�
	//cout << "ccid=" << LOL::ccid << endl;
	
	cout << "ccid=" << ccid << endl;
}

void main(){
	//test1();
	test2();
	system("pause");
}