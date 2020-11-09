/*头文件*---------------------------------------------*/
#pragma once

#include "iostream"

using namespace std;

class Array{
public:
	Array(int length);
	Array(const Array& obj);
	~Array();
public:
	void setDate(int index, int value);
	int getDate(int index);
	int getLength();
public:
	int& operator[](int i);
	Array& operator=(Array& a);
	bool operator==(Array& a);
	bool operator!=(Array& a);
private:
	int m_length;
	int* m_space;
};

/*源文件*---------------------------------------------*/
#include "classArray.h"
 
/*
int m_length;
char* m_space;*/
Array::Array(int length){
	if (length < 0){
		length = 0;
	}
	m_length = length;
	m_space = new int[m_length];
}
Array::Array(const Array& obj){
	this->m_length = obj.m_length;
	this->m_space = new int[obj.m_length];
	for (int i = 0; i<obj.m_length; i++){
		this->m_space[i] = obj.m_space[i];
	}
}
Array::~Array(){
	if (m_length != NULL){
		delete[] m_space;
		m_space = 0;
	}
}
void Array::setDate(int index, int value){
	m_space[index] = value;
}
int Array::getDate(int index){
	return m_space[index];
}
int Array::getLength(){
	return m_length;
}
int& Array::operator[](int i){
	return m_space[i];
}
Array& Array::operator=(Array& a){
	if (this->m_space != NULL){
		delete[] this->m_space;
		this->m_length = 0;
	}
	this->m_length = a.m_length;
	this->m_space = new int[this->m_length];
	for (int i = 0; i < this->m_length; i++){
		this->m_space[i] = a[i];
	}
	return *this;
}
bool Array::operator==(Array& a){
	if (this->m_length != a.m_length){
		return false;
	}
	for (int i = 0; i < this->m_length; i++){
		if (this->m_space[i] != a[i]){
			return false;
		}
	}
	return true;
}
bool Array::operator!=(Array& a){
	 
	return !(*this == a);
}
/*主文件*---------------------------------------------*/
/*主文件-------------------------------------------------------*/
#define _CRT_SECURE_NO_WARNINGS
#include "iostream"
#include "classArray.h"
using namespace std;

void test(){
	Array a1(10);
	for (int i = 0; i < a1.getLength(); i++){
		//a1.setDate(i, i);
		a1[i] = i;//重载"[]"
	}
	cout << "prints array1" << endl;
	for (int i = 0; i < a1.getLength(); i++){
		cout << a1.getDate(i) << " ";
	}
	cout << endl;
	Array a2 = a1;
	for (int i = 0; i < a2.getLength(); i++){
		a2.setDate(i, i);
	}
	cout << "prints array2" << endl;
	for (int j = 0; j < a2.getLength(); j++){
		cout << a2.getDate(j) << " ";
	}
	cout << endl;
    Array a3(5);
	a3 = a1;//重载"="
	a3 = a2 = a1;//重载"="
	cout << "prints array3" << endl;
	for (int k = 0; k < a3.getLength(); k++){
		cout << a3.getDate(k) << " ";
	}
	cout << endl;
	if (a3 == a1){
		cout << "yes";
	}
	else{
		cout << "no";
	}
	cout << endl;
	if (a3 != a1){
		cout << "yes";
	}
	else{
		cout << "no";
	}
	cout << endl;
}

void main(){

	test();

	system("pause");
	return;
}

