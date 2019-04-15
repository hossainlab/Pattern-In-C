#include<stdio.h>
/*
*Pattern-3
*N = 3(Number of Row)
1
1 2
1 2 3
=====
1
1 0
1 0 1
* Here even number is 0(zero)
* And odd number is 1(one)
*Binary Number Right Angle Triangle Pattern
*/
int main() {

    int N,row,col;
    printf("Enter the number of row: ");
    scanf("%d",&N);

    for(row=1; row<=N; row++) {
        for(col=1; col<=row; col++) {
            printf("%d ",col%2);
        }
        printf("\n");

    }

    return 0;
}


