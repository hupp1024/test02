#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
using namespace std;
 
class Ctest{
public:
	int Ctest_a;
	int Ctest_b;
public:
 
	Ctest(int Ctest_a = 0,int Ctest_b = 0){
		this->Ctest_a = Ctest_a;
		this->Ctest_b = Ctest_b;
		cout << "g:" << this->Ctest_a << endl;
	}

	~Ctest(){
		cout << "x:"<< this->Ctest_a << endl;
	}

	void CtestPrint(){
		cout << "Ctest_a:" << this->Ctest_a << endl;
		cout << "Ctest_b:" << this->Ctest_b << endl;
	}


	Ctest CtestAdd(Ctest& x){
		Ctest tmp(this->Ctest_a + x.Ctest_a,
				this->Ctest_b + x.Ctest_b);
		return tmp;//��ִ��tmp����������
	}

	void CtestAdd2(Ctest& x){
		this->Ctest_a = this->Ctest_a + x.Ctest_a;
		this->Ctest_b = this->Ctest_b + x.Ctest_b;
	 
	}

	Ctest& CtestAdd3(Ctest& x){
		this->Ctest_a = this->Ctest_a + x.Ctest_a;
		this->Ctest_b = this->Ctest_b + x.Ctest_b;
		return *this;//��⣺*this<==>*(&x6)<==>x6
	}
 
private:

};
 
 

void test(){
	Ctest x1(1, 10);
	Ctest x2(100, 1000);
 
	{   //x3 = x1 + x2;
		Ctest x3 = x1.CtestAdd(x2);//�������������ʼ���¶���
		x3.CtestPrint();
	}//�˳�֮ǰ��ִ��x3����������

	{
		Ctest x3(2,20);
		Ctest x4(200, 2000);
		//x4 = x4 + x3;
		x4.CtestAdd2(x3); 
		x4.CtestPrint();
	}//�˳�֮ǰ��ִ��x3��x4����������

	{
		Ctest x5(3,30);
		Ctest x6(300,3000);
		//x6 = x6 + x5;
		x6 = x6.CtestAdd3(x5);//��������
		x6.CtestPrint();
	}//�˳�֮ǰ��ִ��x5��x6����������
	
}
void main(){
 
	test();
 
 

 

	system("pause");
	return;
}

 