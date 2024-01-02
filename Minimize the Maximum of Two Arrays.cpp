class Solution {
public:
    int minimizeSet(int div1, int div2, int uni1, int uni2) {
        long long lcm=(1LL*div1*div2)/__gcd(div1,div2);
        long long low=1 , high=1e11;
        while(low<=high){
            long long mid=(low+high)/2;

            long long noDiv1=mid/div1;
            long long noDiv2=mid/div2;
            long long Both=mid/lcm;

            long long not1=mid-noDiv1;
            long long not2=mid-noDiv2;
            long long notBoth=mid-noDiv1-noDiv2+Both;

            if(not1>=uni1 && not2>=uni2 && (not1+not2-notBoth)>=(uni1+uni2)){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};