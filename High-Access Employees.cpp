class Solution {
private:
         int check(string &t1, string &t2){
            int h1 = (t1[0] - '0')*10 + (t1[1] - '0');
            int h2 = (t2[0] - '0')*10 + (t2[1] - '0');
            int m1 = (t1[2] - '0')*10 + (t1[3] - '0');
            int m2 = (t2[2] - '0')*10 + (t2[3] - '0');
            //first two are same
            if(h1 == h2){
                return m2-m1;
            }
            //hours are diff
            else if(h2 - h1 == 1){
                return 60 - (m1-m2);
            }
            //not possible
            return INT_MAX;
        }
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
            int n=access_times.size();
            vector<string>ans;
            map<string, vector<string>>mp;
            for(auto access_time: access_times){
            mp[access_time[0]].push_back(access_time[1]);
        }

        for(auto k:mp){
                string index=k.first;
                auto it =k.second;
                int m=it.size();
                if(m>=3){
                sort(it.begin(),it.end());
                for(int i=2 ;i<m ;i++){
                     if(check(it[i-2],it[i])<60){
                         ans.push_back(index);
                         break;
                     }
                }
            }
        }
            return ans;
    }
};