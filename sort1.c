#include <stdio.h>
#define NUM 5

int test(){
  return 7;
}

int main(){
  int array[] = {10,30,50,40,20};
  int i;
  //sorting code here
  int tmp = 0;
  int j,k;
  for(j=0;j<NUM-1;j++){
    for(k=j+1;k<NUM;k++){
      if(array[k]>array[j]){
        tmp = array[j];
        array[j] = array[k];
        array[k] = tmp;
      }
    }
  }
  
  for(i = 0;i<NUM;i++){
    printf("array[%d]=%d\n",i,array[i]);
  }
  printf("test %d\n",test());
  return 0;
}
