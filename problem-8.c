#include<stdio.h> 

int main(){
   for (int i = 1; i <= 4; i++){
    for (int j = 1; j <= i; j++)
    if (j % 2 == 0){
      printf("\t*");
    } else {
      printf("\ta");
    }
    printf("\n");
    }
    return 0;
   }
   