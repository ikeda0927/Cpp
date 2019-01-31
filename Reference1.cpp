#include <iostream>
using namespace std;

void Ref(int c);
void Ref(int* c);
const int num = 50;
int main(){
	int  a= 20;
	int& r= a;
	int  b=10;
	int* p;
	
	p = &b;
	
	cout << "a : " << a << endl << "b : " << b << endl << "r : " << r <<endl;
	Ref(&r);
	cout <<endl;
	cout << "a : " << a << endl << "b : " << b << endl << "r : " << r <<endl;
	
}
void Ref(int c){
	c= c+num;
	cout << endl << "not ref";
}
void Ref(int* c){
	*c = *c+num;
	cout << endl << "ref";
}

