


int arr[] = {1, 2, 3, 45, 6, 8};
int n = sizeof(arr) / sizeof(arr[0]);

class geeks {
public:
    void left_rotate_array() {
        int k;
        cin >> k;

        k %= n;  // handles k larger than array size

        int temp[6];

        for (int i = 0; i < n; i++) {
            temp[i] = arr[(i + k) % n];
        }

        for (int i = 0; i < n; i++) {
            arr[i] = temp[i];
        }
    }

    void display() {
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
    }
};

int main() {
    geeks geek;

    cout << "Enter number of left rotations: ";
    geek.left_rotate_array();

    cout << "Rotated array: ";
    geek.display();

    return 0;
}