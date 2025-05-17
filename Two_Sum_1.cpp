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
    vector<int> nums ={1,2,3,4,5,6,7,8,899,10};
    int target =4;
    Solution a;
    vector <int> l = a.twoSum(nums,target);
    for( int val: l){
       cout << val <<endl;
    }
}