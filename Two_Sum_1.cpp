#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for (int i=0 ;i<nums.size()-1;i++){
             for (int j=i+1 ;j<nums.size();j++){
                        if(nums[i] +nums[j] == target){
                              return{i,j};
                             
                         }
                  }
             }
             return {};
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
    int target ;
     cin >> target;
     
    Solution a;
    vector <int> l = a.twoSum(nums,target);
    for( int val: l){
       cout << val <<endl;
    }
}