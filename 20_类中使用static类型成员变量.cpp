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
	void printCtest_b(){
		cout << "Ctest_b:" << Ctest_b << endl;
	}
	void addC(){
		Ctest_b++;
	}
private:
	int Ctest_a;
	static int Ctest_b;//�����������ж����õı�������sizeof�����Сʱ����������static���ͱ����Ĵ�С
};
 
int Ctest::Ctest_b = 10;//��ʼ�������������ж����õı���

void main(){
    
	
	Ctest x1(1), x2(2),x3(3);
	x1.printCtest_b();
	x2.addC();
	x3.printCtest_b();


 

	system("pause");
	return;
}