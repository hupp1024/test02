#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
using namespace std;
/*
	�����ࡱ�к���ָ�����ʱ��
		���û�ж��庯����Name(const Name& obj)����ִ����� ��Name obj2 = obj1;����
		C++��������Ĭ�ϵ��á����Ρ��ġ���ֵ���캯��",�����¡�ǳ����������
*/
class Name{
public:
	Name(const char* obj){//�вι��캯��
		name_len = strlen(obj);
		name_p = (char*)malloc(name_len + 1);
		strcpy(name_p, obj);
	}

	Name(const Name& obj){//�������캯�������β�������"Name"���ͣ������ж�
		name_len = obj.name_len;
		name_p = (char*)malloc(name_len + 1);
		strcpy(name_p, obj.name_p);
	}

	~Name(){
		if (NULL != name_p)
		{
			free(name_p);
		}
	}
public:
	char* name_p;
	int name_len;

};

void test(){
	Name obj1("aaaaaaaaas");
	Name obj2 = obj1;
	printf("%s\n", obj2.name_p);
	Name obj3("nnnn");
	obj3 = obj1;//���ڡ�ǳ����������ԭ�򣺡���ʼ�����롰=���ǲ�ͬ���͵Ĳ������������캯�����ܽ��������

}


void main(){
	test();

 
	system("pause");
	return;
}