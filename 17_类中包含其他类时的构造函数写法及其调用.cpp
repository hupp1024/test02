#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
using namespace std;
 
class A{
public:
	A(int _a){
		A_a1 = _a;
	}
public:
	int A_a1;
};

class B{
public:
	B() :A_A1(1), A_A2(2){//1 �̶�A��B��ĳ�ʼ��ֵ
		B_b1 = 1;
		B_b2 = 2;
	}

	//B(int _A_A1_a1, int _A_A2_a1) :A_A1(_A_A1_a1), A_A2(_A_A2_a1){//1.2 �̶�B���ʼ��ֵ
	//	B_b1 = 1;
	//	B_b2 = 2;
	//}

	//��������뺯��1.2����ͬʱ����ͨ�������ڶ�����
	B(int _B_b1, int _B_b2):A_A1(1),A_A2(2){//2 �̶�A���ʼ��ֵ
		B_b1 = _B_b1;
		B_b2 = _B_b2;
	}



	B(int _B_b1, int _B_b2, int _A_A1_a1, int _A_A2_a1) :A_A1(_A_A1_a1), A_A2(_A_A2_a1){//3 ���̶�A���B���ʼ��ֵ
		B_b1 = _B_b1;
		B_b2 = _B_b2;
	}

	//�������캯�����������䡰:A_A1(_A_A1_a1), A_A2(_A_A2_a1)û������
	//��Ϊ��Ȼ�ǿ��������Ǹ�ֵԭ������������ԣ�������ҪҲ�����ٸı�ԭ���������



	void getB()
	{
		printf("B_b1:%d\n", B_b1);
		printf("B_b2:%d\n", B_b2);
		printf("A_A1.A_a1:%d\n", A_A1.A_a1);
		printf("A_A2.A_a1:%d\n", A_A2.A_a1);
		printf("\n\n");
	}
private:
	int B_b1;
	int B_b2;
	A A_A1;
	A A_A2;
};

void main(){
	A A_A1(10);

	//B B_B1;//���� 
	/*
	 ԭ��û�к��ʵĹ��캯��-->B���а�����A�࣬��ֻ��A�����Զ���Ĺ��캯�����вι��캯����
		   ��Ҫ��B�����Զ������ֹ��캯��ʱ�����¸�ʽ��
		   1��B(int _B_b1, int _B_b2):A_A1(1),A_A2(2)
		   2��B(int _B_b1, int _B_b2, int _A_A1_a1, int _A_A2_a1) :A_A1(_A_A1_a1), A_A2(_A_A2_a1)
	*/
	B B_B1; //1
	B_B1.getB();

	B B_B2(1,2); //2
	B_B2.getB();

	B B_B4(1, 2, 3, 4); //3
	B_B4.getB();


	/*
		���캯���ĵ���˳��
			��ִ�е���B����������A��Ĺ��캯����
			����������A���У�ִ�е�˳������B���еĶ���˳��һ�£��������"...:A_A1(1),A_A2(2)"���޹�
		���������ĵ���˳��
			�빹�캯���ĵ���˳���෴
	*/

	system("pause");
	return;
}