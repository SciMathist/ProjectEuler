/*
PROJECT EULER
PROBLEM - 1
MULTIPLES OF 3 0R 5
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