#include "iostream"
using namespace std;
  
class Test{
public:
	Test()//析构函数执行顺序：先定义的“类”的析构函数先执行
	{
		cout << 1 << endl;
	}
	~Test()//析构函数执行顺序：先定义的“类”的析构函数后执行
	{
		cout << 2 << endl;
	}
private:

};

void test(){
	Test t1,t2;
}

void main(){
	test();

 
	system("pause");
	return;
}