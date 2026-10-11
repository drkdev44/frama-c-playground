#include "stdio.h"
#include "limits.h"


/*
 @ requires a > INT_MIN;
 @ ensures a <= 0 ? \result == -a : \result == a;
 @ assigns \nothing;
 */
int absolutevalsafe(int a) {
    if (a <= 0) {
        if (a == INT_MIN) {
            printf("Bad value.");
            return -1;
        }
        else {
            return -a;
        }
    }
    else {
        return a;
    }
}



void main() {
    printf("Absolute value of -55 is %d",absolutevalsafe(-55)); //for test purposes.

}
