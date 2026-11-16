#include<stdio.h>
int main(){
    int n;
    printf("enter the age:");
    scanf("%d",&n);
    if(n>=18){
        printf("the person is eligible for voting.");
    }
    else{
        printf("the person is not eligible for voting");
    }
    return
}