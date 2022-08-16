// sorting an array of 0,1 & 2 using cpp programming.
#include<bits/stdc++.h>
using namespace std;
int main(){
int size;
cout<<"Enter size of array"<<endl;
  cin>>size;
int arr[1000];
  cout<<"Enter data in array"<<endl;
  for(int i=0;i<size;i++){
  cin>>arr[i];
  }
  int countZero=0, countOne=0, countTwo=0;
  for(int i=0;i<size;i++){
  if(arr[i]==0){
  countZero++;}
  else if(arr[i]==1){
  countOne++;
  }
  }
  for(int i=0;i<countZero;i++){
  arr[i]=0;
  }
    for(int i=countZero;i<countzero+countOne;i++){
    arr[i]=1;}
    for(int i=countZero+countOne;i<size;i++){
    arr[i]=2;
    }
  cout<<"Sorted Array of 0,1 & 2"<<endl;
  for(int i=0;i<size;i++){
  cout<<arr[i]<<" ";
  }
  


}
