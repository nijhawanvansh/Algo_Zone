#include <iostream>
using namespace std;

int arr[]={1,2,3,4,5,6,7};
int temp[6];
int summ;
class sliding_window_2_pointer{
public :
void

sliding_window(){

    for(int i=0;i<6;i++){
         temp[i] =arr[i]+arr[i+1]+arr[i+2]+arr[i+3];
cout<<"sum:"<<temp[i]<<endl;

    }
}

 void s_2_pointer(){

}



};

int main(){

sliding_window_2_pointer geek;
geek.sliding_window();
geek.s_2_pointer();








}