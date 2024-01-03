class Solution{   //O(N) , O(1);
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        int repNum=-1; 
        int misNum=-1;
        int i=0;
        while(i<n){
            if(arr[i]!=arr[arr[i]-1]){
                
                swap(arr[i],arr[arr[i]-1]);
            }
            else{
                i++;
            }
        }
        
        for(int i=0;i<n;i++)
        {
            if(arr[i]!=i+1){
                repNum=arr[i];
                misNum=i+1;
            }
        }
        return {repNum,misNum};
    }
};
