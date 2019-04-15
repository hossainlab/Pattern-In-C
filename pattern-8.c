
#include<stdio.h>
/*
Pattern-8
N = 3(Number of Row)
# # #
# #
#
Inverted Special Character Right Angle Triangle Pattern
*/
int main() {

    int N,row,col;



    scanf("%d",&N);

    for(row=N; row >= 1; row--) {
        for(col=1; col<=row; col++) {
            printf("# ");
        }
        printf("\n");

    }
    return 0;
}

