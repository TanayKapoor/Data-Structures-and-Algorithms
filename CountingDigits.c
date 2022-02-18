int countdigits (int n) {
  int count = 0;
  while (n != 0) {
    n = n / 10;
    count++;
  }
  return count;
}

int countdigits_recursive (int n) {
  if (n == 0)
    return 0;
  return 1 + countdigits_recursive(n / 10);
}

int countdigits_log(long n){
    return floor(log10(n) + 1);
}