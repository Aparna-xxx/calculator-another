#include<stdio.h>

int add(int n1,int n2);
int sub(int n1, int n2);
int mul(int n1, int n2);
int div(int n1, int n2);

int main(){
    int a,b;
    printf("Enter the value for first operand:");
    scanf("%d",&a);
    printf("Enter the value for second operand:");
    scanf("%d",&b);

    int sum=add(a,b);
    printf("\nThe sum of two numbers is: %d",sum);
    int difference=sub(a,b);
    printf("\nThe difference between the two numbers is: %d",difference);
    int multiplication=mul(a,b);
    printf("\nThe product of the two numbers is: %d",multiplication);
    int division=div(a,b);
    printf("\nThe division of the two numbers is: %d",division);
}

int add(int n1, int n2){
    return(n1+n2);
}

int sub(int n1, int n2){
    return (n1-n2);
}

int mul(int n1,int n2){
    return (n1*n2);
}

int div(int n1,int n2){
    return (n1/n2);
}
