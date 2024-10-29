/*

Question 4: Create a function printTable that accepts an integer n and prints its multiplication table up to 10. For example, printTable(5) should print the multiplication table of 5.

*/


#include<stdio.h>

void printtable(int);

int main(){
    int n = 0;
    printf("Enter the Number : ");
    scanf("%d",&n);
    printtable(n);
    return 0;
}

void printtable(int n){
    for(int i = 1; i<11; i++){
        printf("%d * %d = %d\n",n,i,n*i);
    }
}