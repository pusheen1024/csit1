#include <iostream>

using namespace std;

void fib(int n) {
    int f1 = 0;
    int f2 = 1;
    for (int i = 0; i < n; i++) {
	cout << f1 << '\n';
	int f = f2;
	f2 = f1 + f2;
	f1 = f;
    }
}

int main() {
    int n;
    cin >> n;
    fib(n);
}
