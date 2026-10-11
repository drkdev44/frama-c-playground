#include "stdio.h"
#include "limits.h"

/*
 @ ensures x < 0 || x > 17 ==> \result == -1;
 @ requires x <= UINT_MAX && x >= 0;
 @ assigns \nothing;
*/

int safefactorialfun(unsigned int x) {
    if (x == 0) {
        return 1;
    }
    if (x < 0 || x > 17) { //actually as parameter unsigned int less than 0 wont compile, but it is great idea to show mathematical boundaries in the code.
        printf("\nPotantial buffer overflow or invalid operation detected.\n");
        return -1;
    }
    int factorial = 1;
    for(x;x>1;x--) {
        factorial = factorial * x;
    }
    return factorial;
}


int main() {
    printf("%d",safefactorialfun(40)); //buffer overflow!
    printf("\n%d",safefactorialfun(12)); //right!
    return 0;
}
