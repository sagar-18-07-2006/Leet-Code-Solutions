#include <iostream>
#include <vector>
#include<algorithm>
#include<climits>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            minPrice = min(minPrice, price);
            maxProfit = max(maxProfit, price - minPrice);
        }
        return maxProfit;
    }
};            

int main (){
 int n ; 
 cout<<"Enter elements in vector";
cin >>n ;
   vector<int> nums;
     for(int i=0; i<n;i++){
        cout<<"enter "<<i<<" element of vector"<<endl;
      int j;
      cin>>j;
      nums.push_back(j);
    }
    Solution a;
    int j = a.maxProfit(nums);
    
   
}



