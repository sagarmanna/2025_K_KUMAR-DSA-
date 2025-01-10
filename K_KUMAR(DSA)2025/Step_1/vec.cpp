#include<iostream>
#include<vector>

using namespace std;
 int main(){

// Sum of add and even  in an asrray 

// Arr - 1 2 3 4 5 6 

//  ind  0 1 2 3 4 5 
//  Arr -1 2 3 4 5 6

   //  Even number is the num which is is divisible give the  remainder 0 ; 

   // 4% 2 = 0;
   // i =3;
   // even sum =2;


   // i =5;
    //even_sum = 5 ;





int arr[] = {1,2,3,4,5,6};
int n =sizeof(arr)/ sizeof(arr[0]);
int even_sum=0;
int odd_sum=0;

for(int i =0;i<n;i++){

    if(arr[i]%2==0){
        even_sum+=arr[i];

    }
}
for(int i =0;i<n;i++){

    if(arr[i]%2!= 0){
        odd_sum+=arr[i];

    }
}
cout<<odd_sum<<"  "<<even_sum<<endl;

    

 }