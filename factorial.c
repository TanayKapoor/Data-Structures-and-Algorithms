# include <stdio.h>

int fact (int n){
    int res = 1;
    for (int i = 2; i <= n; i++){
        res *= i;
    }

    return res;
}

int fact_recursive (int n){
    if (n == 0)
        return 1;
    return n * fact_recursive(n - 1);
}

int main (){
    int n = 6;
    printf("%d\n", fact(n));
    printf("%d\n", fact_recursive(n));
    return 0;
}