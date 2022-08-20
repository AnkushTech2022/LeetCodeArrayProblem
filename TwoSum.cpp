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



//java code of two sum:
import java.util.*;
class twoSum{
public static int twoSum[](int arr[], int target){
  for(int i=0;i<arr.length;i++){
  for(int j=i+1;j<arr.length;j++){
  if(arr[i]+arr[j]==target){
  return new int[]{i,j};
  }}}
  
  return null;
}
public static void main(String[] args){
Scanner sc=new Scanner(System.in);
int size=sc.nextInt();
int arrr[]=new int[1000];
for(int i=0;i<size;i++){
arrr[i]=sc.nextInt();
}
  int target=sc.nextInt();
  
twoSum(arr, target);}}
