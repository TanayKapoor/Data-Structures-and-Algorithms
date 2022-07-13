class alldivisorsbasic {
    static void printDivisors (int n){
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                System.out.print(i + " ");
            }
        }
        System.out.println();
    }

    public static void main(String[] args){
        int n = 6;
        printDivisors(n);
    }
}