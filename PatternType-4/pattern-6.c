#include<stdio.h>
/*
*Pattern-1
*N = 3(Number of Row)
*Triangle
A 
B B 
C C C 

*Inverted Triangle 
C C C 
B B 
A
*Mixed ==> Except First Row of Inverted Triangle  
A 
B B 
C C C 
B B 
A 
*/
int main() {

    int N,row,col;
    printf("Enter the number of rows: ");
    scanf("%d",&N);

    // Triangle
    for(row=1; row<=N; row++) {
        for(col=1; col<=row; col++) {
            printf("%c ",row+64);
        }
        printf("\n");

    }
    // Inverted Triangle
    for(row=N-1; row >= 1; row--) {
        for(col=1; col<=row; col++) {
            printf("%c ",row+64);
        }
        printf("\n");

    }

    return 0;
}

