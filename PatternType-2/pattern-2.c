
#include<stdio.h>
/*
Pattern-7
N = 3(Number of Row)
3 3 3
2 2
1
Inverted Right Angle Triangle Pattern
*/
int main() {

    int N,row,col;
    printf("Enter the number of row: ");
    scanf("%d",&N);

    for(row=N; row >= 1; row--) {
        for(col=1; col<=row; col++) {
            printf("%d ",row);
        }
        printf("\n");

    }
    return 0;
}

