#include <stdio.h>

void func(char *p);
int main(){
  char buf[126];
  strcpy(buf,"abc*123*def");
  func(buf);//abc++123++defが出力されるようにする。
  printf("%s\n",buf);
  return 0;
}
void func(char *p){
  int i;
  printf("\n");
  for(i=0;i<126;i++){
    if(*(p+i) == '*'){
      *(p+i) = '+';
      char temp = *(p+i+1);
      *(p+i+1) = '+';
      int k = i+2;
      int j;
      for(j=0;j<126-i;j++){
        char temp2 = *(p+k);
        *(p+k) = temp;
        k++;
        temp = temp2;
      }
        continue;
    }
  }
}
