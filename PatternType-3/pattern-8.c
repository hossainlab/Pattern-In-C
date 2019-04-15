#include<stdio.h>
/*
*Pattern-8
*N = 3(Number of Row)
*Triangle
#
# #
# # #

*Inverted Triangle
# # #
# #
#

* Triangle+Inverted Triangle
#
# #
# # #
# # #
# #
#

*/
int main() {

    int N,row,col;
    printf("Enter the number of row: ");
    scanf("%d",&N);

    // Triangle
    for(row=1; row<=N; row++) {
        for(col=1; col<=row; col++) {
            printf("# ");
        }
        printf("\n");

    }
    // Inverted Triangle
    for(row=N; row >= 1; row--) {
        for(col=1; col<=row; col++) {
            printf("# ");
        }
        printf("\n");

    }

    return 0;
}

