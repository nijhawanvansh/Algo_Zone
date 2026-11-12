#include <iostream>
using namespace std;

class geeks {
public:
    void geek() {
        int n;
    
        cout << "Enter number: ";
        cin >> n;

        int low = 0, high = n, ans = 0;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (mid * mid == n) {
                ans = mid;
                break;
            }
            else if (mid * mid < n) {
                ans = mid;      // possible answer
                low = mid + 1;  // search right half
            }
            else {
                high = mid - 1; // search left half
            }
        }

        cout << "Square Root = " << ans;
    }
};

int main() {
    geeks geek;
    geek.geek();

    return 0;
}