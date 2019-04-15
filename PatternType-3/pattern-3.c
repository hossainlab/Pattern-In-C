#include<stdio.h>
/*
*Pattern-3
*N = 3(Number of Row)
*Triangle
1
1 0
1 0 1

*Inverted Triangle
1 0 1
1 0
1

* Triangle+Inverted Triangle
1
1 0
1 0 1
1 0 1
1 0
1

*/
int main() {

    int N,row,col;
    printf("Enter the number of row: ");
    scanf("%d",&N);

    // Triangle
    for(row=1; row<=N; row++) {
        for(col=1; col<=row; col++) {
            printf("%d ",col%2);
        }
        printf("\n");

    }
    // Inverted Triangle
    for(row=N; row >= 1; row--) {
        for(col=1; col<=row; col++) {
            printf("%d ",col%2);
        }
        printf("\n");

    }

    return 0;
}

