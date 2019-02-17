#include <stdio.h>

int main(int argc, char *argv[]){
  printf("Hello World.\n");
  // printf("%s\n",argv[1]);
  char string[11];
  scanf("%10s%*[^\n]",string);
  //%10sで文字列を10個読み取り、%[^\n]で改行まで読み飛ばし、%*cで続く改行を読み飛ばす.
  getchar();
  printf("Entered %s\n",string);

  char string2[11];
  scanf("%10s%*[^\n]",string2);
  getchar();
  printf("Entered %s\n",string2);

  char string3[11];
  scanf("%10s%*[^\n]",string3);
  getchar();
  printf("Entered %s\n",string3);
  return 0;
}
