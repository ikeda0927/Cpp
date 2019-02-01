#include <iostream>
using namespace std;
const int ALP_SUM = 52;
const char alp[ALP_SUM] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
					'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
const int WEIGHT=13;
size_t StrLen(char* str);
int main(){
	cout << "Enter string.(Use '_' not ' ')" << endl;
	char s1[512];
	cin >> s1;
	char* s1p = s1;
	int stringLength = (int)StrLen(s1);
	while(stringLength>0){
		stringLength-=2;
		cout << " " << flush;
	}
	cout << "↓" << flush;
	for(;*s1p != '\0';++s1p){
		for(int i=0;i<ALP_SUM;i++){
			if(alp[i] == *s1p){
				//変換する
				if(i<ALP_SUM/2 && ALP_SUM/2-i<=WEIGHT){
					*s1p = alp[WEIGHT+i-ALP_SUM/2];
				}else if(i>=ALP_SUM/2 && ALP_SUM-i<=WEIGHT){
					*s1p = alp[WEIGHT+i-ALP_SUM/2];
				}else{
					*s1p = alp[i+WEIGHT];
				}
				break;
			}
		}
	}
	cout << endl << s1 << endl;

}
size_t StrLen(char* str){
	size_t i;
	for(i=0;*(str+i) != '\0';i++){
		//nop
	}
	return i;
}
