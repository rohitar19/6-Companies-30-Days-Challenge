class Solution {
public:
    void allComb(int st , int k , int target , vector<int>&temp , vector<vector<int>>&ans){
        if(temp.size()==k && target==0){
            ans.push_back(temp);
            return;
        }
        if(target<0) return ;
        for(int i=st ; i<=9 ; i++){
            temp.push_back(i);
            allComb(i+1 ,k ,target-i , temp , ans);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int>temp;
        vector<vector<int>>ans;
        allComb(1,k,n,temp,ans);
        return ans;
    }
};