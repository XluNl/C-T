// ��ͳc ��vs2013���� ��Ҫ������궨�� ��Ȼ��4996����
#define _CRT_SECURE_NO_WARNINGS

#include <iostream> 
using namespace std;

// 1 ȫ�ֱ�����⣨ʧ�� a�ظ����壩
//int a;
int a = 10;

// 2 ���������ǿ (ֱ��error w,hδ����������������ǿ������ֵ��ǿ)
int getRetes(int w,int h){
	return EXIT_FAILURE;
}

// 3 ����ת����ǿ
void test3(){
	char *p = (char*)malloc(sizeof(64));//malloc ���ص���void*
}

// 4 struct ��ǿ
struct Persion{
	int age;
	void getage(){ age++; };//c++����struct��������Ӻ���
};
void test4(){
	Persion p1;//���Բ���struct �ؼ���
	p1.age = 10;
	p1.getage();
	cout << p1.age << endl;
}

// 5 bool ������ǿ
bool falg;

// 6 ��Ŀ�������ǿ
void test5(){
	int a = 10;
	int b = 20;
	printf("ret=%d\n", a>b ? a : b=100);
	//(a>b ? a : b)=100 // a=10,b=100  c++ �з��ص��Ǳ���
}

// 7 const ����  ��c++ ��const��������ڴ�  ��������һ�����ű��У�
void test6(){
	// ���ǿ���ͨ��ָ���޸�(�ֲ��������µĳ��� ����ͨ��ָ���޸�s)
	const int a_b = 20;
	int *p = (int *)&a_b;
	*p = 200;
	printf("*p=%d--a_m=%d", *p, a_b);//*p=200--a_m=20 �����ֳ���a_b��û�б��޸ģ�

	//ʹ�ó�����ʼ������
	int arr[a_b];
}
	

int main(){
	test6();
	system("pause");
	return EXIT_SUCCESS;
}