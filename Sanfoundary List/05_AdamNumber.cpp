#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number = ";
    cin >> n;

    int r1, r2, rem, sq, rev1 = 0, rev2 = 0;
    int temp = n * n;

    while (temp > 0) {
        r1 = temp % 10;
        rev1 = rev1 * 10 + r1;
        temp = temp / 10;
    }

    // Find the square root of the reversed number
    sq = sqrt(rev1);

    // Reverse the square root
    while (sq > 0) {
        r2 = sq % 10;
        rev2 = rev2 * 10 + r2;
        sq = sq / 10;
    }

    // Check if the reversed square root is equal to the original number
    if (rev2 == n) {
        cout << n << " is an Adam number." << endl;
    } else {
        cout << n << " is not an Adam number." << endl;
    }

    return 0;
}
