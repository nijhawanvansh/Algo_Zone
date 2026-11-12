// power of m on n using loops 
int ans=1;
for(int i=0;i<m;i++){

ans=ans*n;class Solution {
public:
  int NthRoot(int n, int m) {

int ans;

    int low=0;
    int high=m;
   
    while(high>=low){
     int mid=(high+low)/2;

     if(pow(mid,n)==m){
        ans=m;

     }  
     else if(pow(mid,n)<m){
        ans = mid;
        low=mid-1;
     }
else (pow(mid,n)>m){
        high=mid+1;
     }
 return ans;


    }
       









    }
};


}

cout<< ans;















