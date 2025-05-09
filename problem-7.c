#include<stdio.h>
int main (){
    char c;
    printf("enter a character:");
    scanf("%c",&c);
    if(c=='a'){
        printf("apple");
    }else
        if(c=='w'){
        printf("window");
    }else{
        printf("linux");
    }
    return 0;


}