// 传统c 在vs2013编译 需要加这个宏定义 不然包4996错误
#define _CRT_SECURE_NO_WARNINGS

#include <iostream> 
using namespace std;

namespace songwukong{
	int ccid = 10;
}

void test1(){
	int ccid = 50;
	// 写了using 后 目的是想让使用 songwukong 下的ccid（报错ccid 多次声明）
	// 但是编译器 又有就近原则
	// 所以就存在二义性问题
	//using songwukong::ccid;
	cout << "ccid=" << ccid << endl;
}

namespace LOL{
	int ccid = 40;
}
// using 编译指令
void test2(){
	//int ccid = 20;

	// 如果将上面的 ccid注掉  就会使用songwukong 里的ccid
	using namespace songwukong;
	
	//using namespace LOL;
	// 如果打开了 多个命名空间  则要明确指定命名空间
	//cout << "ccid=" << LOL::ccid << endl;
	
	cout << "ccid=" << ccid << endl;
}

void main(){
	//test1();
	test2();
	system("pause");
}