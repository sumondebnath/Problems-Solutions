#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    while (N--) {
        string A, B;
        cin >> A >> B;
        if (B.size() > A.size()) {
            cout << "nao encaixa" << endl;
        } else {
            bool fits = true;
            int a_pos = A.size() - B.size();
            for (int i = 0; i < B.size(); ++i) {
                if (A[a_pos + i] != B[i]) {
                    fits = false;
                    break;
                }
            }
            cout << (fits ? "encaixa" : "nao encaixa") << endl;
        }
    }
    return 0;
}