class Solution {
public:
    void getCom(int ind ,string s, string temp , unordered_map<char,string>&mp , vector<string>&ans){
        if(ind>=s.size()){
            ans.push_back(temp);
            return;
        }
        string ch=mp[s[ind]];
        for(int i=0 ;i<ch.size() ; i++){
            temp.push_back(ch[i]);
            getCom(ind+1 , s , temp , mp , ans);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        if(digits.size()==0) return ans;
        string temp;
        unordered_map<char,string>mp;
        mp['2']="abc";
        mp['3']="def";
        mp['4']="ghi";
        mp['5']="jkl";
        mp['6']="mno";
        mp['7']="pqrs";
        mp['8']="tuv";
        mp['9']="wxyz";
        getCom(0,digits , temp , mp , ans);
        return ans;
    }
};