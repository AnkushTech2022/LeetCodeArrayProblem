//Given a sorted array, find the index of target, if target not find return index it should be found.

#include<bits/stdc++.h>
using namespace std;
int searchElement(int arr[], int target){
for(int i=0;i<arr.length;i++){
if(arr[i]==target){
cout<<i<<" -Index"<<endl;
}
else if(target<arr[i]){
cout<<"Posible index of insertion "<<i<<endl;
}}
}


int main(){
  int target;
  int arr[1000];
  int size;
  cout<<"size of array"<<endl;
  cin>>size;
  cin>>target;
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
  searchElement(arr, target);
}
