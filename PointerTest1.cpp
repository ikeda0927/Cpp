#include <iostream>
#include <string>
using namespace std;

int main(){
	// get string with space
	//char c[512];
	//cout << "Please enter" << endl;
	//cin.getline(c,sizeof(c));
	//cout << "Entered : " << c << endl;
/*
	int a;
	int b;
	cout << "Enter a:" << flush;
	cin >> a;
	cout << endl << "Enter b:" << flush;
	cin >> b;
	cout << endl << "a+b="<< a+b << endl;
	cout << "&a=" << &a << endl;
	cout << "&b=" << &b << endl;
	cout << "*(&a-1)=" << *(&a-1) << endl;
	cout << "*(&b)=" << *(&b) << endl;
	*/
	int array[5];
	for(int i = 0;i<5;i++){
		array[i]= i*10;
	}
	for(int j = 0;j<5;j++){
		cout << "array[" << j << "]=" << array[j] << endl;
	}
	for(int j = 0;j<5;j++){
		cout << "&array[" << j << "]=" << &array[j] << endl;
	}
	for(int j = 0;j<5;j++){
		cout << "array[" << j << "]=" << *(array+j) << endl;
	}
	cout << "array=" << array << endl;
	int* p;
	p = array;
	cout << "*p=" << *p << endl;
	for(int j = 0;j<5;j++){
		cout << "p[" << j << "]=" << p[j] << endl;
	}
	
}

