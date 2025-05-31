#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a;
        for(int i=0;i<nums.size();i++)
        {
                if(nums[i]!=i)
                {
                    a=i;
                    break;
                    
                }
        }
       return a;
    }
};
int main (){
    vector<int> nums ;
    cout<<"enter size of vectors"<<endl;
    int n;
    cin>>n;
     for(int i=0; i<n;i++){
        cout<<"enter "<<i<<" element of vector"<<endl;
      int j;
      cin>>j;
      nums.push_back(j);
    }
  Solution a;
  int n=a.missingNumber(nums);

  
  
}