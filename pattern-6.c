
#include<stdio.h>
/*
Pattern-6
N = 3(Number of Row)
C C C
B B
A

Inverted Alphabetic
Right Angle Triangle Pattern
*/
int main() {

    int N,row,col;
    printf("Enter the number of row: ");
    scanf("%d",&N);

    for(row=N; row >= 1; row--) {
        for(col=1; col<=row; col++) {
            printf("%c ",row+64);
        }
        printf("\n");

    }
    return 0;
}

