/*头文件-------------------------------------------*/
#pragma once
class myTeacher
{
public:
	void setAge(int age);
	int getAge(); 
private:
	int m_age;
	char m_name[32];
};

/*类文件-------------------------------------------*/
#include "myTeacher.h"


void myTeacher::setAge(int age){//注意！！！”::"符号的位置
	m_age = age;
}
int myTeacher::getAge(){
	return m_age;
}
/*主文件-------------------------------------------*/
#include "iostream"
#include "myTeacher.h"
using namespace std;
 
void main(){
	myTeacher t1;
	t1.setAge(10);
	cout << t1.getAge() << endl;
	
	system("pause");
	return;
}