#include "iostream"
using namespace std;
  
class Test{
public:
	Test()//��������ִ��˳���ȶ���ġ��ࡱ������������ִ��
	{
		cout << 1 << endl;
	}
	~Test()//��������ִ��˳���ȶ���ġ��ࡱ������������ִ��
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