#include<iostream>
usiing namespace std;
int main(){

    int n;
    int arr[n];
    input(arr);
    map<int,int>mp;
    int maxiFreq,maxiElement,miniFreq,miniElement;

    for(int i =1; i<=n;i++){
       if(mp.find(arr[i])==mp.end()){
        mp[arr[i]]=1;

       }
       else{
        mp[arr[i]]=mp[arr[i]]+1;
       }
       if(maxiFreq<mp[arr[i]]){
        maxiFreq=mp[arr[i]];
        maxiElement=arr[i];
       }
       if(miniFreq>mp[arr[i]]){
        miniFreq=mp[arr[i]];
        miniElement=arr[i];
       }

    }
    cout<<(maxiFreq,maxiElement);
    cout<<(miniFreq,miniElement);
}