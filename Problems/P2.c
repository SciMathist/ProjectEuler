/*
PROJECT EULER
PROBLEM - 2
Even Fibonacci Numbers
*/

#include <stdio.h>

int main(){
    int i = 1, j = 2, k;
    int sum = 2;
    do{
        k = i + j;
        if( k % 2 == 0){
        sum += k;
        }
        i = j;
        j = k;

    }
    while(k <= 4000000);

    printf("Sum = %d", sum);
}