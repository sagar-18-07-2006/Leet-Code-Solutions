#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        for(int i = 0;i<n;i++)
        {
            nums1.pop_back();
        }
        for(int val : nums2){
            nums1.push_back(val);

    }
    
    sort(nums1.begin(),nums1.end());
    }
};


int main (){
    vector<int> nums1,nums2 ;
    cout<<"enter size of vector 1"<<endl;
    int m;
    cin>>m;
    for(int i=0; i<m;i++){
        cout<<"enter "<<i<<" element of vector"<<endl;
      int j;
      cin>>j;
      nums1.push_back(j);
    }
    cout<<"enter size of vector 2"<<endl;
    int n;
    cin>>n;
    for(int i=0; i<n;i++){
        cout<<"enter "<<i<<" element of vector"<<endl;
      int j;
      cin>>j;
      nums2.push_back(j);
    }
    
    Solution a;
 a.merge(nums1,m,nums2,n);
 for (int val : nums1){
    cout<<val;
 }
}