#include<stdio.h> 

int main(){
     int N;
     printf("Enter the number: ");
     scanf("%d",&N);
     int num[N];
     printf("Enter the number: ");
     for (int i = 1; i<= N; i++){
        scanf("%d",&num[i]);
        for (int j = 1; j<= i; j++){
            printf("%d", num[i]);
        }
     }
     return 0;
}
