#include <iostream>
using namespace std;

typedef class Sushi{
public:
	string name;
	int amount;
	int value;

	Sushi(string name,int amount,int value);

	void show();
}Sushi;

Sushi::Sushi(string name,int amount,int value){
	this->name = name;
	this->amount = amount;
	this->value = value;
}

void Sushi::show(){
	cout << name << "は" << amount << "貫で" << value << "円です。" << endl;
}
int main(){
	Sushi sushi = Sushi("マグロ",2,100);
	sushi.show();
}
