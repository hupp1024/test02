#include "iostream"
using namespace std;
 

struct Teacher
{
	char name[4];
	int age;
};

 

//pT是t1的别名  
void printfT2(Teacher &pT)//调用时的本质“Teacher const *pT = &t1
{
	cout<<pT.age<<endl;
	pT.age = 3;//修改有效
}

 
void main()
{
	Teacher t1;
	t1.age = 1;
	t1.name[0] = 'a';
	t1.name[1] = 'b';
	t1.name[2] = 'c';
	t1.name[3] = 'd';

 

	printfT2(t1);//调用时的本质“Teacher const *pT = &t1 ，“&t1”操作由C++编译器自动完成 
	printf("t1.age:%d \n", t1.age);  

 

	cout << "hello..." << endl;
	system("pause");
	return;
}
