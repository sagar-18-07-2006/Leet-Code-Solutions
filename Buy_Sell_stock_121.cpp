#include <iostream>
#include <vector>
#include<algorithm>
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
 int n ; cout<<"Enter rows of pascal triangle";
cin >>n ;
    
    Solution a;
vector<vector<int>> d=a.generate(n);
for (int i = 0; i < n; i++)
{
   for (int j = 0; j <=i; j++)
   {cout<<d[i][j]<<" ";
   }
   cout<<"\n";   
}


 }
