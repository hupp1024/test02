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
	void addC(){
		Ctest_b++;
	}
	static void printCtest_bStatic(){//����static��Ա����
		//cout << "Ctest_b:" << Ctest_a << endl;//����ԭ�򣺵�������ķ�static����
		cout << "Ctest_b:" << Ctest_b << endl;
	}
private:
	int Ctest_a;
	static int Ctest_b;//�����������ж����õı���
};
 
int Ctest::Ctest_b = 10;//��ʼ�������������ж����õı�����ע�⣺��������ǰ��

void main(){
 
	Ctest x3(3);
 
	x3.printCtest_bStatic();//��������static���ͳ�Ա��������1
	Ctest::printCtest_bStatic();//��������static���ͳ�Ա��������1

 

	system("pause");
	return;
}