#include <iostream>
#include <cstdlib>
using namespace std;

const int ALP_SUM = 52;//アルファベットの総数
const char alp[ALP_SUM] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z',
					'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int weight=13;//ずらすアルファベットの個数の初期値
size_t StrLen(char* str);//入力した文字列の長さを返す関数のプロトタイプ宣言
int main(int argc, char* argv[]){
	if(argc > 1){//コマンドライン引数の二番目をweightとして受け取る
		weight = atoi(argv[1]);//コマンドライン引数から受け取ったものはchar*なのでintにする。
		cout << weight << endl;
	}
	cout << "Enter string.(Use '_' not ' ')" << endl;
	char s1[512];//十分な大きさの配列を用意
	cin >> s1;//文字列を読み込む
	char* s1p = s1;//読み込んだ文字列のポインタをセット
	int stringLength = (int)StrLen(s1);//文字列の長さをゲット
	while(stringLength>0){//大体真ん中らへんに矢印を持っていきたい
		stringLength-=2;
		cout << " " << flush;
	}
	cout << "↓ " << weight << flush;//矢印の隣にずらした数を記す
	for(;*s1p != '\0';++s1p){//s1pの先頭アドレスにある文字が終端文字になるまで先頭アドレスをずらす
		for(int i=0;i<ALP_SUM;i++){//アルファベットの総数分、
			if(alp[i] == *s1p){//alp[i]が文字列の先頭と一致しているか調べ、
				//見つかったら変換する
				if(i<ALP_SUM/2 && ALP_SUM/2-i<=weight){//小文字且つ、先頭に戻る必要がある場合
					*s1p = alp[weight+i-ALP_SUM/2];
				}else if(i>=ALP_SUM/2 && ALP_SUM-i<=weight){//大文字且つ、先頭に戻る必要がある場合
					*s1p = alp[weight+i-ALP_SUM/2];
				}else{//何も考えずにずらせる場合
					*s1p = alp[i+weight];
				}
				break;
			}
		}
	}
	cout << endl << s1 << endl;
}
size_t StrLen(char* str){//本で見た文字列の長さをゲットするコード
	size_t i;
	for(i=0;*(str+i) != '\0';i++){
		//nop
	}
	return i;
}
