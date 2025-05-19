#include<iostream>
#include <vector>
using namespace std;
class solution { public:
    int removeDuplicates(vector<int>& nums) {
    if(nums.size() == 0) return 0;

        for(auto it = nums.begin(); it != nums.end() - 1; ) {
            if(*it == *(it + 1)) {
                it = nums.erase(it);  // erase returns the next iterator
            } else {
                ++it;
            }
        }

        int k = nums.size();
        return k;
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
    solution a;
    int k= a.removeDuplicates(nums);
    cout<<k;
    
}