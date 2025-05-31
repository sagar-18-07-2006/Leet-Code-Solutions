#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int coun = count(nums.begin(), nums.end(), 0);  
        
    
        nums.erase(remove(nums.begin(), nums.end(), 0), nums.end());
    
        for (int i = 0; i < coun; i++) {
            nums.push_back(0);
        }
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
  a.moveZeroes(nums);


  
  
}