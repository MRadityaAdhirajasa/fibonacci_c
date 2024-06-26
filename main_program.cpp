#include <iostream>
using namespace std;

int fibRecursive(int n) {
    if (n == 0 || n == 1) {
        return n;
    } else {
        return fibRecursive(n - 1) + fibRecursive(n - 2);
    }
}

int fibDynamic(int n) {
    int fibo[n + 1]; // array to store fibonacci values
    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i <= n; i++) {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    return fibo[n];
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    cout << "Fibonacci ke-" << n << " dengan rekursif: " << fibRecursive(n) << endl;

    cout << "Fibonacci ke-" << n << " dengan dynamic programming: " << fibDynamic(n) << endl;

    return 0;
}
