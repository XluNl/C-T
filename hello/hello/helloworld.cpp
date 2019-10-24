#include <iostream> //标准输入输出

// c++ 头文件
#include <math.h>
// c头文件
#include <cmath>

// 表示后面用到的 cout，endl是std下的(因为可能其他的地方也有cout)
using namespace std; //使用命名空间 std打开一个叫std房间

int main(){
	// cout 标准输出
	// endl 换行
	// << 左移运算符
	cout << "hello world" << 1233 << endl;
	// 如果引入 std命名空间
	//std::cout << "hello world" << endl;
	
	//阻塞
	system("pause");
	// 返回正常退出
	return EXIT_SUCCESS;
}