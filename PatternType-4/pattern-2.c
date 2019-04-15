#include<stdio.h>
/*
*Pattern-2
*N = 3(Number of Row)
*Triangle
1 
2 2 
3 3 3 

*Inverted Triangle
3  3 3 
2 2 
1
*Mixed ==> Except First Row of Inverted Triangle  
1 
2 2 
3 3 3 
2 2 
1 

*/
int main() {

    int N,row,col;
    printf("Enter the number of rows: ");
    scanf("%d",&N);

    // Triangle
    for(row=1; row<=N; row++) {
        for(col=1; col<=row; col++) {
            printf("%d ",row);
        }
        printf("\n");

    }
    // Inverted Triangle
    for(row=N-1; row >= 1; row--) {
        for(col=1; col<=row; col++) {
            printf("%d ",row);
        }
        printf("\n");

    }

    return 0;
}

