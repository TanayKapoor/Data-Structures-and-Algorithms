#include <stdio.h>

int CountZeros_Naive(int n){
    int fact = 1;
    for (int i = 2; i <= n; i++){
        fact *= i;
    }

    int res = 0;
    while (fact % 10 == 0){
        res++;
        fact /= 10;
    }

    return res;
}

int CountZeros_Fast(int n){
    int res2 = 0;
    for (int i = 5; n/i >= 1; i *= 5){
        res2 += n / i;
    }

    return res2;
}

int main(){
    printf("%d\n", CountZeros_Naive(5));
    printf("%d\n", CountZeros_Fast(100));
    return 0;
}