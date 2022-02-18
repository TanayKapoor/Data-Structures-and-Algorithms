#include <stdio.h>

void primeFactors(int n){
    for (int i = 2; i <= n; i++){
        if (n % i == 0){
            printf("%d ", i);
            n = n / i;
            i--;
        }
    }
}

int main(){
    primeFactors(10);
    return 0;
}