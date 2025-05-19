#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int left = 0, right = nums.size();
        while (left < right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] < target)
                left = mid + 1;
            else
                right = mid;
        }
        return left;
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
    int k  = a.searchInsert(nums ,target);
 cout<<k;}
 