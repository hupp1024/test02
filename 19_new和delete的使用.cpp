#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
using namespace std;
 
class Ctest{
public:
	Ctest(int _a){
		Ctest_a = _a;
		cout << "Ctest" << endl;
	}
	~Ctest(){
		cout << Ctest_a << endl;
		cout << "~Ctest" << endl;
	}
private:
	int Ctest_a;
};
 

void main(){
 
	int* p1 = new int;//������ͨ����
	*p1 = 20;
	cout << *p1 << endl;
	delete p1 ;

	int* p2 = new int(10);//������ͨ������ͬʱ��ʼ��
	cout << *p2 << endl;
	delete p2;

	int* p3 = new int[2];//�����������
	p3[0] = 1;
	p3[1] = 2;
	cout << p3[0] << endl;
	cout << p3[1] << endl;
	delete[] p3;

	Ctest* p4 = new Ctest(10);//�����ಢ��ʼ��
	delete p4;

	/*
		malloc��free��new��delete������
			��ִ����Ĺ��캯������������
	*/

	system("pause");
	return;
}