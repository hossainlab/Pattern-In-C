
#include<stdio.h>
/*
Pattern-4
N = 3(Number of Row)
1 1 1
0 0
1
====
3 3 3
2 2
1
* 1 for odd numbers
* 0 for even numbers
Inverted Right Angle Triangle Pattern
*/
int main() {

    int N,row,col;
    printf("Enter the number of row: ");
    scanf("%d",&N);

    for(row=N; row >= 1; row--) {
        for(col=1; col<=row; col++) {
            printf("%d ",row%2);
        }
        printf("\n");

    }
    return 0;
}

