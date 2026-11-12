#include <iostream>
#include <algorithm>
using namespace std;

int arr[] = {2,4,3,566,3,45,24,56,42,1};
int n = sizeof(arr)/sizeof(arr[0]);

class binary_srch {
public:
    
int bnry(int arr[],int low ,int high,int mid,int target){

if(low>high){
    return -1;
}
mid =(high+low)/2;
if(arr[mid]==target){
    return mid;
}
else if(target>arr[mid]){
bnry()
}
else if(target<arr[mid]){
    
}

}












};

int main() {
    binary_srch geek;

    int x;
    cout << "Enter element: ";
    cin >> x;

    geek.bnry(x);
}