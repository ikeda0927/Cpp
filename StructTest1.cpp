#include <iostream>
using namespace std;

typedef struct Sushi{
	string name;
	unsigned int value:10;
	unsigned int amount:2;
	Sushi* next;
} Sushi;

int main(){//test list
	Sushi sushi[] = {
		{"マグロ",100,2,NULL},
		{"いか",100,2,NULL},
		{"えび",100,2,NULL},
		{"大トロ",200,1,NULL},
	};
	int elNum=sizeof sushi/sizeof sushi[0];
	for(int i=0;i<elNum-1;i++){
		sushi[i].next = &sushi[i+1];
	}
	for(Sushi* pSushi=&sushi[0];pSushi != NULL;pSushi = pSushi->next){
		cout << pSushi->name << "は" << pSushi->amount << "貫で" << pSushi->value << "円です。" << endl;
	}

}
