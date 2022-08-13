#include<bits/stdc++.h>
using namespace std;
int main(){
  int arr[100];
  int sum;
  cin>>sum;
  int size;
  cin>>size;
  for(int i=0;i<size;i++){
  for(int j=i+1;j<size;j++){
  if(arr[i]+arr[j]==sum){
  cout<<i<<" "<<j<<endl; 
  }
  }
  }
  return 0;
}
