#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    for(int i = 0; i < n; i++) {
        int currsum = 0;     // should be outside inner loop

        for(int j = i; j < n; j++) {
            currsum = currsum + arr[j];
            cout << currsum << " ";
        }
        cout << endl;
    }

    return 0;
}
