#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n;
    cout << "Enter a number = ";
    cin >> n;

    if (n <= 1) {
        cout << "NOT PRIME" << endl;
        return 0;
    }

    bool isPrime = true;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }

    if (isPrime) {
        cout << "PRIME" << endl;
    } else {
        cout << "NOT PRIME" << endl;
    }

    return 0;
}
