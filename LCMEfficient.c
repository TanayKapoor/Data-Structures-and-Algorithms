int gcd_eucledean_optimised (int a, int b) {
    if (b == 0)
    return a;
    else
    return gcd_eucledian_optimised (b, a % b);
}

int lcm(int a, int b){
    return (a * b) / gcd_eucledean_optimised(a, b);
}