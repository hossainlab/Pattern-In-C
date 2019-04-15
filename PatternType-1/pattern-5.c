#include<stdio.h>
/*
*Pattern-5
*N = 3(Number of Row)
A
A B
A B C

*Alphabetic Right Angle Triangle Pattern
*ASCII Value For Capital letters-64
*ASCII Value For Small Letters-96
*/
int main() {

    int N,row,col;
    printf("Enter the number of row: ");
    scanf("%d",&N);

    for(row=1; row<=N; row++) {
        for(col=1; col<=row; col++) {
            printf("%c ",col+96);
        }
        printf("\n");

    }

    return 0;
}



