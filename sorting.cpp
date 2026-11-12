#include <iostream>
using namespace std;

int arr[] = {2, 7, 5, 0, 9, 5, 4, 3, 45};
int n = sizeof(arr) / sizeof(arr[0]);

class Sorting {
public:
    void selection_sort() {
        for (int i = 0; i < n - 1; i++) {
            int min = i;

            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[min]) {
                    min = j;
                }
            }

            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    }

    void bubble_sort() {
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1 - i; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    }

    void insertion_sort() {
        for (int i = 1; i < n; i++) {
            int j = i;

            while (j > 0 && arr[j - 1] > arr[j]) {
                int temp = arr[j - 1];
                arr[j - 1] = arr[j];
                arr[j] = temp;
                j--;
            }
        }

        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    }
};

int main() {
    Sorting geek;
    geek.selection_sort();

    return 0;
}