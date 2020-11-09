#include "iostream"
using namespace std;
class Cube{
public:
	void setA(int a){
		m_a = a;
	}

	void setB(int b){
		m_b = b;
	}

	void setC(int c){
		m_c = c;
	}

	int  getA(){
		return m_a;
	}

	int getB(){
		return m_b;
	}

	int getC(){
		return m_c;
	}

	void setABC(int a = 0, int b = 0, int c = 0){
		m_a = a;
		m_b = b;
		m_c = c;
	}
	int getV(){
		m_v = m_a * m_b * m_c;
		return m_v;
	}

	int getS(){
		m_s = 2 * ( m_a * m_b +
					m_a * m_c +
				    m_b * m_c );
		return m_s;
	}

	int judgeCube(Cube& v){
		if (v.getA() == m_a &&
			v.getB() == m_b &&
			v.getC() == m_c){
			return 1;
		}
		return 0;
	}

private:
	int m_a;
	int m_b;
	int m_c;
	int m_v;
	int m_s;
};
void main(){
 
	Cube v1, v2,v3;
	v1.setABC(1, 2, 3);
	v2.setABC(1, 2, 3);
	v3.setABC(2, 3, 4);
	cout << v1.getS() << endl;
	cout << v1.getV() << endl;
	cout << endl;
	cout << v1.judgeCube(v2) << endl;
	cout << v1.judgeCube(v3) << endl;
	system("pause");
	return;
}