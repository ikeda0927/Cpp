#include <stdio.h>
#define true 1
#define false 0

const int ALP_SUM = 26;//�A���t�@�x�b�g�̐�
const char lowerCase[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
const char upperCase[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
int keySize;//���̃T�C�Y
int sentenceSize;//�Í����A�����Ώۂ̕�����
int i;//for���p�̕ϐ�
char key[512];//����char�̔z��
int keyNum[512];//����num�̔z��
char sentence[512];//�Í����A�����Ώۂ�char�̔z��
int sentenceNum[512];//�Í����A�����Ώۂ�char�̔z�񂪐����ɕϊ����ꂽ���
int encryptedNum[512];//�Í����A�������͕����ς݂�num�̔z��
char encryptedSentence[512];//�Í����A�������͕����ς݂�char�̔z��
char encrypt[] = "Encrypt";//��r�p������
char decrypt[] = "Decrypt";//��r�p������
char getkey[] = "getKey";//��r�p������
int scomp(char a[],char b[]);//char�̔z��̔�r
void scopy(char dst[],char src[]);//char�̔z��̃R�s�[
int converttonums(char srcarray[],int numarray[]);//char�̔z�񂩂�num�̔z���
int main(int argc, char* argv[]){
    if(argc < 4){
		printf("Enter 'key' and 'SENTENCE' and 'Encrypt or Decrypt' as arguments.\n");
		printf("Or to extract the key, Enter 'the sent SENTENCE' and 'plain SENTENCE' and 'getKey'.\n");
		return 0;
	}
	//������̃R�s�[
	scopy(key,argv[1]);
	scopy(sentence,argv[2]);
	//�����琔��𓾂�
	keySize = converttonums(key,keyNum);
	//�������琔��𓾂�
	sentenceSize = converttonums(sentence,sentenceNum);
	//�Í��� or ����
	int k;
	int m;
	if(scomp(argv[3],encrypt)){//�Í���
		for(k =0,m=0;k<sentenceSize;k++){
			encryptedNum[k] = keyNum[m] + sentenceNum[k];
			if(encryptedNum[k]>ALP_SUM-1){
				encryptedNum[k] = encryptedNum[k]-ALP_SUM;
			}
			m++;
			if(m>keySize-1){
				m=0;
			}
		}
		printf("EncryptedSentence:");
	}else if(scomp(argv[3],decrypt)){//����
		for(k =0,m=0;k<sentenceSize;k++){
			encryptedNum[k] = sentenceNum[k] - keyNum[m];
			if(encryptedNum[k]<0){
				encryptedNum[k] = ALP_SUM+encryptedNum[k];
			}
			m++;
			if(m>keySize-1){
				m=0;
			}
		}
		printf("DecryptedSentence:");
	}else if(scomp(argv[3],getkey)){//���̒��o
		for(k =0,m=0;k<sentenceSize;k++){
			encryptedNum[k] = keyNum[m] - sentenceNum[k];
			if(encryptedNum[k]<0){
				encryptedNum[k] = ALP_SUM+encryptedNum[k];
			}
			m++;
			if(m>keySize-1){
				m=0;
			}
		}
		printf("The key is included in here :");
	}else{//��O������"Encrypt"��"Decrypt"��"getKey"�ȊO�̕����񂪓��͂��ꂽ�Ƃ�
		printf("Please set 'Encrypt' or 'Decrypt'.\n",argv[3]);
		return 0;
	}
	for(i=0;i<sentenceSize;i++){//�Í���or�������ꂽ���̕\��
		printf("%c",upperCase[encryptedNum[i]]);
	}
	return 0;
}
int scomp(char a[],char b[]){
	//char�̔z��ł͔�r�ł��Ȃ����߁Achar�ɂ��Ĉꕶ������r����
	int i;
	char ca;
	char cb;
	for(i=0;a[i] != '\0';i++){
		ca = (char)a[i];
		cb = (char)b[i];
		if(ca != cb){
			return false;
		}
	}
	cb=b[i];
	if(cb == '\0'){
		return true;
	}else{
		return false;
	}
}
int converttonums(char srcarray[],int numarray[]){
	//a -> 0, b -> 1, .... z -> 25�̂悤�ɕϊ�
	int counter = 0;
	while(*srcarray != '\0'){
		int i;
		for(i = 0;i<ALP_SUM;i++){
			if(*srcarray == lowerCase[i]){
				numarray[counter] = i;
			}else if(*srcarray == upperCase[i]){
				numarray[counter] = i;
			}
		}
		srcarray++;
		counter++;
	}
	return counter;
}
void scopy(char dst[],char src[]){
	//src�̕������dst�ɃR�s�[,�����̒��g�͓��������A�h���X���قȂ�B
	while(*src != '\0'){
		*dst = *src;
		src++;
		dst++;
	}
}
