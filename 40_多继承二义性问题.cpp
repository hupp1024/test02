/*主文件-------------------------------------------------------*/
#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
using namespace std;
 
class B{
public:
	B(){
		cout << "B construction "<<endl;
	}
public:
	int b;
protected:
private:

};
 
class B1 :virtual public B{
public:
	int b1;
};
 
class B2 :virtual public B{
public:
	int b2;
private:

};

class C :public B1, public B2{
public:
	int c;

};

 
 

void test(){
	C c1;
	c1.b1 = 100;
	c1.b2 = 200;
	c1.c = 300;
	
	c1.b = 400;
	c1.B1::b = 500;
	c1.B2::b = 600;

}

void main(){

 
	test();
	cout << "hello" << endl << endl << endl << endl << endl;

	system("pause");
	return;
}

