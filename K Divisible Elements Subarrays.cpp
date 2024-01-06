// class Solution {
// public:
//     int countDistinct(vector<int>& nums, int k, int p) {
//         //time - O(n3) space- O(n2);
//         int n=nums.size();
//         set<vector<int>>st;
//          for(int i=0 ;i<n ;i++){
//              for(int j=i ;j<n ;j++){
//                  int temp=k;
//                  vector<int>subset;
//                  for(int k=i ;k<=j ; k++){
//                      if(nums[k]%p==0)temp--;
//                      subset.push_back(nums[k]);
//                  }
                 
//                  if(temp>=0){
//                      st.insert(subset);
//                  }
//              }
//          }
//          return st.size();
//     }
// };
// int countDistinct(vector<int>& nums, int k, int p) {
//        //if array contain all the unquie element 
//        // then in O(nlogn)
//         int n=nums.size();
//         vector<int>temp(n,0);
//         vector<int>prefix(n+1);
    
//         for(int i=0 ;i<n ; i++){
//             if(nums[i]%p==0)temp[i]=1;
//         }
//         prefix[0]=temp[0];
//         for(int i=1 ;i<n ;i++){
//             prefix[i]=prefix[i-1]+temp[i];
//         }

//         for(int i=1 ; i<=n ; i++){
//             int check=prefix[i]-k;
//             int index=lower_bound(prefix.begin() , prefix.end() , check)-prefix.begin();
//             ans+=(i-index);
//         }
//         return ans;
class Solution {
public:
    //O(n2)*O(nlogn) for insert in set ~~ O(N3) 
    int countDistinct(vector<int>& nums, int k, int p) {
         int n=nums.size();
        set<vector<int>>ans;
        for(int i=0;i<n;i++){
            vector<int>v;
            int ct=0;
            for(int j=i;j<n;j++){
                v.push_back(nums[j]);
                if(nums[j]%p==0)ct++;
                if(ct>k)break;
                ans.insert(v);      
            }
        }
        return ans.size();
    }
};