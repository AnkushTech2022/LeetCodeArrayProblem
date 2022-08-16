//Sorting an array with o,1 using c++ programming.
#include<bits/stdc++.h>
using namespace std;
int main(){
int size;
cout<<"Enter size of array:"<<endl;
cin>>size;
int arr[1000];
  cout<<"Enter data in array"<<endl;
  for(int i=0;i<size;i++){
  cin>>arr[i];
  }
  int countZero=0, countOne=0;
  for(int i=0;i<size;i++){
  if(arr[i]==0){
  countZero++;}
 /* else if(arr[i]==1){
    countOne++;
  }
  */
  }
  for(int i=0;i<countZero;i++){
  arr[i]=0;}
  for(int i=countZero;i<size;i++){
  arr[i]=1;}
  
  cout<<"Sorted Array is -"<<endl;
  for(int i=0;i<size;i++){
  cout<<arr[i]<<" "; }

}


I/P == 1 0 1 1 1 0 0 0
O/P == 0 0 0 0 1 1 1 1
