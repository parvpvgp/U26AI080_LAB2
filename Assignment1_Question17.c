#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter First number:");
    scanf("%d",&a);
    printf("Enter Second number:");
    scanf("%d",&b);
    printf("Enter Third number:");
    scanf("%d",&c);
    if(a>b&&a>c){
        printf("%d is the greatest number",a);
    }
    else if(b>a&&b>c){
        printf("%d is the greatest number",c);
        }
    
    if(b>a&&b>c){
        printf("%d is the greatest number",b);
    }
    else if(c>a&&c>b){
        printf("%d is the greatest number",c);
    }   
}
