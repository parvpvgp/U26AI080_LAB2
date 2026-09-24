#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter First number:");
    scanf("%d",&a);
    printf("Enter Second number:");
    scanf("%d",&b);
    printf("Enter Third number:");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("%d is the greatest number",a);

        }
        else{
            printf("%d is the greatest number",c);
        }
    }
    if(b>a){
        if(b>c){
            printf("%d is the greatest number",b);
        }
        else{
            printf("%d is the greatest number",c);
        }
    }

}