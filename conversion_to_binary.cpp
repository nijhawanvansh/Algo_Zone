#include <iostream>
using namespace std;

class geeks {
public:
    void geek(int n) {
        if (n == 0) {
            cout << 0;
            return;
        }

        int binary = 0;
        int place = 1; 
        while (n > 0) {
            
            int x = n % 2;    
            n = n / 2;         

            binary = binary + x * place;
            place = place * 10;
        }

        cout << binary;
    }
};

int main() {
    geeks g;
    int n;
    cout << "Enter a number: ";
    cin >> n;
    g.geek(n);
    return 0;
}