#include <stdio.h>
#include <stdlib.h>

void getInput(int, int*);

int main(){

  int num1, num2, i = 0, j = 0;
  int* input1;
  int* input2;
  scanf("%d%d", &num1, &num2);
  input1 = malloc(num1 * sizeof(int));
  input2 = malloc(num2 * sizeof(int));
  getInput(num1, input1);
  getInput(num2, input2);
  
  while(i < num1 && j < num2){
    if(*(input1 + i) > *(input2 + j)){
      printf("%d ", *(input2 + j));
      ++j;
    }
    else{
      printf("%d ", *(input1 + i));
      ++i;
    }
  }

  while(i < num1){
     printf("%d ", *(input1 + i));
     ++i;
  }

  while(j < num2){
    printf("%d ", *(input2 + j));
    ++j;
  }
  printf("\n");

  return 0;
}

void getInput(int num, int* list){
  
  for(int i = 0; i < num; ++i){
    scanf("%d", list+i);  
  }

}
