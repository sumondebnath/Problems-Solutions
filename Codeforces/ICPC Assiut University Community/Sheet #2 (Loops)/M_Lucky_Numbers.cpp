#include <iostream>
using namespace std;

bool isLucky(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 4 && digit != 7) return false;
        n /= 10;
    }
    return true;
}

int main() {
    int a, b;
    cin >> a >> b;

    bool found = false;

    for (int i = a; i <= b; i++) {
        if (isLucky(i)) {
            cout << i << " ";
            found = true;
        }
    }

    if (!found) {
        cout << -1;
    }

    cout << endl;
    return 0;
}
