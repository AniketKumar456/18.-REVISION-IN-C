/*

Question 2: Create a function isEven that returns 1 if a number is even and 0 if it is odd. Test this function with different inputs from the main() function.

*/

#include<stdio.h>

int iseven(int);

int main(){
    int num = 0, ret = 0;
    printf("Enter the Number : ");
    scanf("%d",&num);
    ret = iseven(num);
    if(ret == 1){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    return 0;
}


int iseven(int num){
    int ret = 0;
    ret = num%2==0?1:0;
    return ret;
}