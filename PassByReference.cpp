#include <iostream>
using namespace std;

void changeValue(int& a);
//void changeValue(int a);
int main(){
	int num1 =20;
	changeValue(num1);
	cout << "num1 : " << num1 << endl;
}
/*
void changeValue(int num){
	num= num*10;
}
*/
void changeValue(int& num){
	num= num*10;
}

