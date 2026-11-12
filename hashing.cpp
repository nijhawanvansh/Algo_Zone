
#include <iostream>
using namespace std;
#include <map>
#include <unordered_map>


class geeks
{
public:
    void hash_map()
    {
        int arr[] = {1, 2, 3, 4, 5};

        int hash[6] = {0};   // CREATES ARRAY OF 6 INTEGERS   //always makeas n+1 

        for (int i = 0; i < 5; i++){
            hash[arr[i]]++;
        }

        for (int i = 1; i < 6; i++){
            cout << hash[i] << " ";
        }

        cout << endl;
    }

    // Maps uses a little less memory than hashmap (not always true)
   
    void maps()
    {
        int arr[] = {1, 2, 3, 4, 5};

        map<int/*NO.*/, int>/*ITS FREQ*/ maps;

        for (int i = 0; i < 5; i++){
            maps[arr[i]]++;
        }

        for (int i = 1; i <= 5; i++){
            cout << maps[i] << " ";
        }

        // STORES THE VALUE IN SORTED ORDER

        cout << endl;
    }
 
    void unordered_maps()
    {
        int arr[] = {1, 2, 3, 4, 5};

        unordered_map<int/*NO.*/, int>/*ITS FREQ*/ maps;

        for (int i = 0; i < 5; i++){
            maps[arr[i]]++;
        }

        for (int i = 1; i <= 5; i++){
            cout << maps[i] << " ";
        }

        // STORES THE KEY-VALUE PAIRS WITHOUT GUARANTEED SORTED ORDER

        cout << endl;
    }
};

int main()
{
    geeks geek;

    geek.hash_map();
    geek.maps();
    geek.unordered_maps();

    return 0;
}
