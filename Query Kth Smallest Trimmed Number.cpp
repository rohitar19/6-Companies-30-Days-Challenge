class Solution {
private:
    int findKth(vector<pair<string,int>>temp ,int k){
        sort(temp.begin(),temp.end());
        int cnt=0;
        for(int i=0 ;i<temp.size() ; i++){
            cnt++;
            if(cnt==k){
                return temp[i].second;
            }
        }
        return -1;
    }
public:
    vector<int> smallestTrimmedNumbers(vector<string>& nums, vector<vector<int>>& queries) {
        vector<int>ans;
        int n=nums[0].size();
        for(int i=0 ;i<queries.size() ; i++){
            int kth=queries[i][0];
            int nd=queries[i][1];
            vector<pair<string,int>>temp;
            for(int j=0 ; j<nums.size() ; j++){
                 string s=nums[j].substr(n-nd ,n);
                 temp.push_back({s,j});
            }
            ans.push_back(findKth(temp ,kth));
        }
            return ans;
    }
};