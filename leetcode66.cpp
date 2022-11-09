// plus one in array
/*Example 2:

Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Incrementing by one gives 4321 + 1 = 4322.
Thus, the result should be [4,3,2,2].

Example 3:

Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].
*/


vector<int> onePlus(vector<int>& array){
  for(int i=array.size()-1;i>=0;--i){
      if(array[i]<9){
          array[i]++;
          return array;
      }
      else
          array[i]=0;
  }
  array.emplace_back(0);
  array[0]=1;
return array;
}
