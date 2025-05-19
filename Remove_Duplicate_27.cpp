#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;
        for(int i = 0; i< nums.size(); i++){
            if(nums[i] != val){
                nums[index] = nums[i];
                index++;
            }
        }
        return index;
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
     int l = a.removeElement(nums ,target);
     cout<<l;
}