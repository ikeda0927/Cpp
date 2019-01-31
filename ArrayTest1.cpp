#include <iostream>
using namespace std;

int const NUM = 10;
void exposeArray(int array[]);
int main(){
	int array[NUM];
	for(int i=0;i<NUM;i++){
		array[i]=i+1;
	}
	cout << "Use NUM." << endl;
	for(int k=0;k<NUM;k++){
		cout << array[k] << endl;
	}
	cout << endl << "Use sizeof without function." << endl;
	for(int l=0;l<sizeof array;l++){
		cout << array[l] << endl;
	}
	cout << endl << "Use sizeof without function.(sizeof array / sizeof array[0])" << endl;
	for(int l=0;l<(sizeof array)/(sizeof array[0]);l++){
		cout << array[l] << endl;
	}
	cout << endl << "Use sizeof with function." << endl;
	exposeArray(array);
	cout << "finish" << endl;
}
void exposeArray(int array[]){
	for(int m=0;m<sizeof array;m++){
		cout << array[m] << endl;
	}
}

