#include <iostream>
#include <cstdlib>
using namespace std;

typedef enum CompareResult{
	LESS_THAN,
	EQUAL_TO,
	GREATER_THAN
}CompareResult;
CompareResult CR;
void showResult(){
	switch (CR) {
		case LESS_THAN:
		cout << "a is less than b" << endl;
		break;
		case EQUAL_TO:
		cout << "a is equal to b" << endl;
		break;
		case GREATER_THAN:
		cout << "a is greater than b" << endl;
		break;
	}
}
void compare(int a,int b){
	if(a<b){
		CR = LESS_THAN;
	}else if(a == b){
		CR = EQUAL_TO;
	}else if(a>b){
		CR = GREATER_THAN;
	}
}
int main(int argc, char* argv[]){//Enum
	if(argc>2){
		compare(atoi(argv[1]),atoi(argv[2]));
		showResult();
	}
}
