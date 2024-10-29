/*

Question 1: Write a function called add that takes two integers as parameters and returns their sum. Call this function from the main() function and display the result.

*/


#include<stdio.h>

int add(int,int);

int main(){
    int x = 0, y = 0;
    printf("Enter the two Number : ");
    scanf("%d %d",&x,&y);
    int sum = 0;
    sum = add(x,y);
    printf("Addition of two number is %d",sum);
    return 0;
}

int add(int x, int y){
    return x+y;
}