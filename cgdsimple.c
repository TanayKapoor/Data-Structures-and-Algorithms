#include <stdio.h>
#include <stdlib.h>
#define min(a,b)            (((a) < (b)) ? (a) : (b))

int gcd_simple (int a, int b){
    int res;
    res = min(a, b);

    while (res > 0){
        if (a % res == 0 && b % res == 0){
            return res;
        }
        res--;
    }

    return res;
}

int gcd_eucledian(int a, int b){
    while (a != b){
        if (a > b){
            a -= b;
        }
        else{
            b -= a;
        }
    }
    return a;
}


int gcd_eucledean_optimised (int a, int b) {
    if (b == 0)
    return a;
    else
    return gcd_eucledian_optimised (b, a % b);
}


int main(){
    printf("%d\n", gcd_simple(5, 100));
    return 0;
}