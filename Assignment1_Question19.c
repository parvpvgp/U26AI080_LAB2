#include<stdio.h>
int main(){
    char ch;
    printf("Enter A CHARACTER:");
    scanf("%c",&ch);
    if(ch>=65&&ch<=90){
        printf("Character is not a lower case Letter");

    }
    else if(ch>=97&&ch<=122){
        printf("Character is a Lower case Letter");
    }
}