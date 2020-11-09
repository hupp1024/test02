#include "iostream"
using namespace std;



class my{
//声明权限关键字时：默认为私有
private:
	double m_r;
	double m_s;
public:
	void getR(double r){
		m_r = r;
	}
	double getS(){
		m_s = 3.14* m_r * m_r;
		return m_s;
	}
	
};
 
 
void main(){
	my c1, c2;
	c1.getR(10);
	
	cout << c1.getS()<< endl;
	
	system("pause");
	return;
}