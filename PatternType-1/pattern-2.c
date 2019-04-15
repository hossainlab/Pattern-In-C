#include<stdio.h>
/*
*Pattern-2
*N = 3(Number of Row)
1
2 2
3 3 3
*Number Right Angle Triangle Pattern
*/
int main() {

    int N,row,col;
    printf("Enter the number of row: ");
    scanf("%d",&N);

    for(row=1; row<=N; row++) {
        for(col=1; col<=row; col++) {
            printf("%d ",row);
        }
        printf("\n");

    }

    return 0;
}

