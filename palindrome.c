# include <stdio.h>

int isPal (int n) {
    int temp = n;
    int reverse = 0;
    while (n != 0) {
        reverse = reverse * 10 + n % 10;
        n = n / 10;
    }
    return reverse == temp;
}

int main() {
    int n = 363;
    printf("%d\n", isPal(n));
    return 0;
}