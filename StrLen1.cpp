#include <iostream>
using namespace std;

size_t StrLen(char* str);
void ShowLength(char* str);
int main(){
	ShowLength("Hello");
}

/*
size_t StrLen(char* str){
	size_t i;
	for(i=0;str[i] != '\0';i++){
		//nop
	}
	return i;
}
*/
/*
size_t StrLen(char* str){
	char* p;
	for(p = str;*p != '\0';++p){
		//nop
		cout << p << endl;
	}
	return p-str;
}
*/
size_t StrLen(char* str){
	size_t i;
	for(i=0;*(str+i) != '\0';i++){
		//nop
	}
	return i;
}
void ShowLength(char* str){
	cout << "������u" << str << "�v�̒�����" << StrLen(str) << "�o�C�g�ł��B" << endl;
}


