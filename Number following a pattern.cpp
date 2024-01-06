class Solution{   
public:
    string printMinNumberForPattern(string s){
        int n=s.size();
        int num=1;
        int i=0;
        string ans;
        ans.push_back('1');
        while(i<n){
            if(s[i]=='D'){
                int j=i;
                //count no of D.
                while( j<n && s[j]=='D')j++;
                int numD=j-i;
                num+=numD;
                //insert at ith position 
                ans[i]=(num+'0');
                int cnt=num;
                //push all in cnt in decreasing pattern
                while(i!=j){
                    cnt--;
                    ans.push_back(cnt+'0');
                    i++;
                }
                
            }
            else{
                num++;
                ans.push_back(num+'0');
                i++;
            }
        }
        return ans;
    }
};


