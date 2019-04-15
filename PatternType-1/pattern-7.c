#include<stdio.h>
/*
Pattern-7
N = 3(Number of Row)
*
* *
* * *
Special Character Right Angle Triangle Pattern
*/
int main() {

    int N,row,col;
    printf("Enter the number of row: ");
    scanf("%d",&N);

    for(row=1; row<=N; row++) {
        for(col=1; col<=row; col++) {
            printf("* ");
        }
        printf("\n");

    }

    return 0;
}




