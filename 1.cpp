#include <iostream>
#include <string.h>

using namespace std;

int main(){
    int n = 200, i;
    for (i = 0; i < n; i++) {
        n++;
        cout << n;
        goto x;
        cout << n;
    }
    x: 
    do {
        cout << "LableX";
        break;
    } while (1);
    return 1;
}