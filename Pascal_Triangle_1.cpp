class Solution {
private:
    int comb(int n,int r){
        long int res = 1;
        for(int i=0;i<r;i++){
            res = res*(n-i);
            res = res/(i+1);
        }
        return res;
    }
public:
    vector<int> getRow(int rowIndex) {
        vector<int>ans;
        for(int i=0;i<=rowIndex;i++){
            ans.push_back(comb(rowIndex,i));
        }
        return ans;
    }
};