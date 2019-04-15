
#include<stdio.h>
/*
Pattern-5
N = 3(Number of Row)
A B C
A B
A
Inverted Alphabetic Right Angle Triangle Pattern
ASCII Value for Capital Letters-64
ASCII Value for Small Letters-97
*/
int main() {

    int N,row,col;
    printf("Enter the number of row: ");
    scanf("%d",&N);

    for(row=N; row >= 1; row--) {
        for(col=1; col<=row; col++) {
            printf("%c ",col+64);
        }
        printf("\n");

    }
    return 0;
}

