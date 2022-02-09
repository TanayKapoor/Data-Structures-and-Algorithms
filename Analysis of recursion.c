void fun(int n){
    if (n <= 0) return;

    printf("Hello");

    fun(n / 2);
    fun(n / 2);
}

// Questions

void fun(int n){
    if (n <= 0) return;

    for (int i = 0; i < n; i++)
        printf("Hello");

    fun(n / 2);
    fun(n / 3);
}

void fun(int n){
    if (n <= 0) return;

    for (int i = 0; i < n; i++)
        printf("Hello");

    fun(n - 1);
}