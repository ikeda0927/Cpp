#include <iostream>
using namespace std;

int DAYS = 3;//O“ú•ª
typedef class Sushi{
private:
	string name;
	int* array;//“ú‚²‚Æ‚Ì”„‚ê‚½M”
	int arrayEle;
	int amount;
	int value;
public:
	Sushi(string name,int amount,int value,int arrayEle);
	~Sushi();
public:
	string getName();
	void setArray(const int index,const int value);
	int getAmount();
	int getValue();
	int getSum();
	int getSold(const int index);
	float getAve();
	void show();
}Sushi;

Sushi::Sushi(string name,int amount,int value,int arrayEle){
	this->name = name;
	this->amount = amount;
	this->value = value;
	this->arrayEle = arrayEle;
	array = new int[arrayEle];
	cout << "Sushi(" << name << ") generated." << endl;
}
Sushi::~Sushi(){
	if(array != NULL){
		delete [] array;
		cout << "Array deleted." << endl;
	}
}

string Sushi::getName(){
	return name;
}

void Sushi::setArray(const int index,const int value){
	array[index] = value;
}

int Sushi::getAmount(){
	return amount;
}

int Sushi::getValue(){
	return value;
}

int Sushi::getSum(){
	int sum=0;
	for(int i=0;i<arrayEle;i++){
		sum= sum+ array[i];
	}
	return sum;
}

int Sushi::getSold(const int index){
	return array[index];
}

float Sushi::getAve(){
	float ave=0.0f;
	for(int i =0;i < arrayEle;i++){
		ave+=array[i];
	}
	return ave;
}

void Sushi::show(){
	cout << name << "‚Í" << amount << "ŠÑ‚Å" << value << "‰~‚Å‚·B" << endl;
}
int main(){
	Sushi sushi = Sushi("ƒ}ƒOƒ",2,100,DAYS);
	sushi.show();
	sushi.setArray(0,100);
	sushi.setArray(1,50);
	sushi.setArray(2,200);
	cout << sushi.getSum() << endl;
}
