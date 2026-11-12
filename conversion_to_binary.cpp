#include <iostream>
using namespace std;

class conversion {
public:
    void binary() {
        int n;
        cout << "Enter a number: ";
        cin >> n;

        if (n == 0) {
            cout << 0;
            return;
        }

        int arr[32];
        int count = 0;

        while (n > 0) {
            arr[count] = n % 2;
            n = n / 2;
            count++;
        }

        // Print in reverse - because we stored LSB first
        for (int i = count - 1; i >= 0; i--) {
            cout << arr[i];
        }
    }
};

int main() {
    conversion c;
    c.binary();
    return 0;
}