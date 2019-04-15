#include<stdio.h>
/*
*Pattern-6
*N = 3(Number of Row)
*Triangle
A
B B
C C C

*Inverted Triangle
C C C
B B
A

* Triangle+Inverted Triangle
A
B B
C C C
C C C
B B
A

*/
int main() {

    int N,row,col;
    printf("Enter the number of row: ");
    scanf("%d",&N);

    // Triangle
    for(row=1; row<=N; row++) {
        for(col=1; col<=row; col++) {
            printf("%c ",row+64);
        }
        printf("\n");

    }
    // Inverted Triangle
    for(row=N; row >= 1; row--) {
        for(col=1; col<=row; col++) {
            printf("%c ",row+64);
        }
        printf("\n");

    }

    return 0;
}

