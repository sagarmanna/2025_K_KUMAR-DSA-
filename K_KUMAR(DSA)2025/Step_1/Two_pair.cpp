#include<iostream>
using namespace std;
 int main(){

int arr1[]={1,2,3,4,};
int arr2[]={5,6,7,8};
int n = sizeof(arr1)/sizeof(arr1[0]);
int m = sizeof(arr2)/sizeof(arr2[0]);

for(int i =0 ; i<n;i++){
    for(int j =0;  j<m; j++){

        int  pair_sum=arr1[i]+arr2[j];
        cout<<pair_sum<<" ";

    }
}
{
    
}


 }