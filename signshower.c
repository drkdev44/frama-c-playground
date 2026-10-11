#include "stdio.h"
#include "limits.h"


/*
 @ requires x >= INT_MIN && x <= INT_MAX;
 @ ensures x > 0 ==> \result == 1;
 @ ensures x < 0 ==> \result == -1;
 @ ensures x == 0 ==> \result == 0;
 @ assigns \nothing;
 */


int signshowerfun(int x) {
    if (x < 0) {
        return -1;
    }
    else if (x > 0) {
        return 1;
    }
    else {
        return 0;
    }

}





void main() {

    printf("%d",signshowerfun(43));
    printf("%d",signshowerfun(-5));
    printf("%d",signshowerfun(0));
    //must write to console "1-10"



}
