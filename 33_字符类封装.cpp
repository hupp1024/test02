/**头文件-----------------------------------------------------*/
#pragma once
#include "iostream"
using namespace std;
class myString
{
public:
	friend ostream& operator<<(ostream& out, myString& obj);
	friend istream& operator>>(istream& in, myString& obj);
public:
	//myString();
	myString(int len = 0);
	myString(const char* p);
	myString(const myString& obj);
	~myString();
public:
	myString& operator=(const char* p);
	myString& operator=(const myString& obj);
	char& operator[](int index);
	bool operator==(const char* p);
	bool operator!=(const char* p);
	bool operator==(const myString& obj);
	bool operator!=(const myString& obj);
	int operator<(const char* p);
	int operator>(const char* p);
	int operator<(const myString& obj);
	int operator>(const myString& obj);

private:
	int l;
	char* s;
};

/**源文件-----------------------------------------------------*/
#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include "iostream"
#include "myString.h"
#include "string.h"
using namespace std;

//myString::myString(){//无参
//	this->l = 0;
//	this->s = new char[this->l + 1];
//	strcpy(this->s, "");
//}
myString::myString(int len ){//有参
	if (0 == len){
		this->l = len;
		this->s = new char[len + 1];
	}
	else{
		this->l = len;
		this->s = new char[this->l + 1];
		memset(this->s, 0, this->l);
	}

}
myString::myString(const char* p){//有参
	if (NULL == p){
		this->l = 0;
		this->s = new char[this->l + l];
		strcpy(this->s, "");
	}
	else{
		this->l = strlen(p);
		this->s = new char[this->l + 1];
		strcpy(this->s, p);
	}
}
myString::myString(const myString& obj){//赋值
	this->l = obj.l;
	this->s = new char[this->l + 1];
	strcpy(this->s, obj.s);
}
myString::~myString(){//析构
	if (this->s != NULL){
		delete[] this->s;
		this->s = NULL;
		this->l = 0;
	}
}
myString& myString::operator=(const char* p){//字符初始化
	if (NULL != this->s){
		delete[] this->s;
		this->l = 0;
	}
	if (NULL == p){
		this->l = 0;
		this->s = new char[this->l + 1];
		strcpy(this->s, "");
	}
	else{
		this->l = strlen(p);
		this->s = new char[this->l + 1];
		strcpy(this->s, p);
	}
	return *this;
}
myString& myString::operator=(const myString& obj){
	if (NULL != this->s){
		delete[] this->s;
		this->l = 0;
	}
	this->l = strlen(obj.s);
	this->s = new char[this->l + 1];
	strcpy(this->s, obj.s);
	return *this;
}
char& myString::operator[](int index){
	return this->s[index];
}
ostream& operator<<(ostream& out, myString& obj){
	out << obj.s;
	return out;
}
istream& operator>>(istream& in, myString& obj){
	cin >> obj.s;
	return in;
}
bool myString::operator==(const char* p){
	if (NULL == p){
		if (0 == this->l)
			return true;
		else
			return false;
	}
	else{
		if (this->l == strlen(p))
			return !(strcmp(this->s, p));
		else
			return false;
	}
}
bool myString::operator!=(const char* p){
	return !(*this == p);//bool myString::operator==(const char* p)
}
bool myString::operator==(const myString& obj){
	if (this->l != obj.l)
		return false;
	return !strcmp(this->s, obj.s);
}
bool myString::operator!=(const myString& obj){
	return !(*this == obj);//直接利用bool myString::operator==(const myString& obj)
}
int myString::operator<(const char* p){
	return strcmp(this->s,p);
}
int myString::operator>(const char* p){
	return strcmp(p, this->s);
}
int myString::operator<(const myString& obj){
	return strcmp(this->s,obj.s);
}
int myString::operator>(const myString& obj){
	return strcmp(obj.s, this->s);
}
/*主文件-------------------------------------------------------*/
#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
#include "myString.h"
using namespace std;

void test(){
	myString s1;//调 无参构造函数
	myString s2("s2");//调 有参数构造函数
	//myString s2_2 = NULL;//调 有参数构造函数
	myString s3 = s2;//调 赋值构造函数
	myString s4 = "asdf";//调 字符初始化 函数

	s4 = s2;//重载=号
	s4 = "aaaaaaa";//重载=号

	s4[1] = 'b';//重载[]号

	cout << s4 << endl;//重载<<号

	if (s2 == "aa")//重载 == 
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	if (s2 == s2)//重载 == 
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	if (s2 != "aa")//重载 != 
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	if (s2 != s2)//重载 != 
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	s3 = "aaa";
	int tag1 = s3 < "bbb";
	if (tag1<0)//重载 <
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	s3 = "aaa";
	int tag2 = s3 < s2;
	if (tag2)//重载 <
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	myString s5(128);//重载>>
	cin >> s5;
	cout << endl;
 
}
void main(){

	test();
 
	cout << "hello" << endl;

	system("pause");
	return;
}


