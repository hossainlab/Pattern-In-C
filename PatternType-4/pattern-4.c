#include<stdio.h>
/*
*Pattern-4
*N = 3(Number of Row)
*Triangle
1 
0 0 
1 1 1 

*Inverted Triangle 
1 1 1 
0 0 
1 
*Mixed ==> Except First Row of Inverted Triangle  
1 
0 0 
1 1 1
1 1 
1 

*/
int main() {

    int N,row,col;
    printf("Enter the number of rows: ");
    scanf("%d",&N);

    // Triangle
    for(row=1; row<=N; row++) {
        for(col=1; col<=row; col++) {
            printf("%d ",row%2);
        }
        printf("\n");

    }
    // Inverted Triangle
    for(row=N-1; row >= 1; row--) {
        for(col=1; col<=row; col++) {
            printf("%d ",row%2);
        }
        printf("\n");

    }

    return 0;
}

