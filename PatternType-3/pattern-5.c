#include<stdio.h>
/*
*Pattern-5
*N = 3(Number of Row)
*Triangle
A
A B
A B C

*Inverted Triangle
A B C
A B
A

* Triangle+Inverted Triangle
A
A B
A B C
A B C
A B
A

*/
int main() {

    int N,row,col;
    printf("Enter the number of row: ");
    scanf("%d",&N);

    // Triangle
    for(row=1; row<=N; row++) {
        for(col=1; col<=row; col++) {
            printf("%c ",col+64);
        }
        printf("\n");

    }
    // Inverted Triangle
    for(row=N; row >= 1; row--) {
        for(col=1; col<=row; col++) {
            printf("%c ",col+64);
        }
        printf("\n");

    }

    return 0;
}

