#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;

        for (int i = 0; i < numRows; i++) {
            // 1) Create a row of length (i+1), filled with 1s.
            vector<int> currentRow(i + 1, 1);

            // 2) For each “middle” element, sum the two elements above it:
            //    those are in the previous row, which is result.back().
            for (int j = 1; j < i; j++) {
                currentRow[j] = result.back()[j - 1]   // left parent
                              + result.back()[j];      // right parent
            }

            // 3) Append this row to result.
            result.push_back(currentRow);
        }

        return result;
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
