/*

Question 3: Write a function findMax that takes three integer arguments and returns the maximum of the three numbers. Call this function from main() and print the maximum value.

*/

#include<stdio.h>

int findmax(int,int,int);

int main(){
    int a = 0, b = 0, c = 0, max = 0;
    printf("Enter the three Number : ");
    scanf("%d %d %d",&a,&b,&c);
    max = findmax(a,b,c);
    printf("Maximum number is %d",max);
    return 0;
}


int findmax(int a, int b, int c){
    int max = 0;
    max =  (a>b&&a>c)?a:(b>a&&b>c)?b:c;
    return max;
}