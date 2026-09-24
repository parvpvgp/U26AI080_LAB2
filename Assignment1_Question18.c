#include<stdio.h>
int main(){
    int n1,n2,n3;
    printf("Enter the first number:");
    scanf("%d",&n1);
    printf("Enter the Second number:");
    scanf("%d",&n2);
    printf("Enter the third number:");
    scanf("%d",&n3);
    int max = (n1 > n2 && n1 > n3) ? n1 : ((n2 > n3) ? n2 : n3);
    printf("%d is the maximum number",max);
}