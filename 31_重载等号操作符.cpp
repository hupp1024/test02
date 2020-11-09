#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
using namespace std;
/*
当“类”中含有指针变量时：
如果没有定义函数“Name(const Name& obj)”而执行语句 “Name obj2 = obj1;”则
C++编译器会默认调用“隐形”的“赋值构造函数",而导致“浅拷贝”报错
*/
class Name{
public:
	Name(const char* obj){//有参构造函数
		name_len = strlen(obj);
		name_p = (char*)malloc(name_len + 1);
		strcpy(name_p, obj);
	}

	Name(const Name& obj){//拷贝构造函数（从形参类型是"Name&"类型，可以判断
		name_len = obj.name_len;
		name_p = (char*)malloc(name_len + 1);
		strcpy(name_p, obj.name_p);
	}

	~Name(){
		if (NULL != name_p)
		{
			free(name_p);
		}
	}
	Name& operator=(Name& obj){
		if (this->name_p != NULL){
			delete[] this->name_p;
			this->name_len = 0;
		}
		this->name_len = obj.name_len;
		this->name_p = new char[this->name_len + 1];
		strcpy(this->name_p, obj.name_p);
		return *this;
	}
public:
	char* name_p;
	int name_len;

};

void test(){
	Name obj1("aaaaaaaaas");
	Name obj2 = obj1;//用赋值构造函数完成"obj1初始化化obj2"的操作
	printf("%s\n", obj2.name_p);
	Name obj3("nnnn");
	/*
	Name obj4("abcd");
	obj4 = obj1;//报错
	由于“浅拷贝”报错，原因：“初始化”与“=”是不同类型的操作，
	赋值构造函数不能解决此问题
	解决方法：重载"="操作符
	*/
	Name obj4("abcd");
	obj4 = obj1;//
	printf("%s\n", obj4.name_p);
}


void main(){
	test();


	system("pause");
	return;
}