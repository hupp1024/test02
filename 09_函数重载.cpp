#include "iostream"
using namespace std;

/*
	�������أ�
	1����������
	2����������
	3������˳��
	ע�⣺����ֵ�����жϱ�׼������
*/
void myfunc1(int a, int b){
	printf("%d\n%d\n", a, b);
}
void myfunc1(double a, int b){
	printf("\n%lf\n%d\n", a, b);
}
void myfunc1(int a, double b){
	printf("\n%d\n%lf\n", a, b);
}
void myfunc1(int a, int b, int c){
	printf("\n%d\n%d\n%d\n", a, b, c);
}
 
void main(){
	
	
	myfunc1(1, 2);
	myfunc1(1.0, 2);
	myfunc1(1, 2.0);
	myfunc1(1, 2, 3);


	
 
	
	system("pause");
	return;
}