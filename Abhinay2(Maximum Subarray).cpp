class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        /*int  maxsum=INT_MIN;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            for(int j=i;j<nums.size();j++){
                sum+=nums[j];
                maxsum=max(maxsum,sum);
            }
        }
        return maxsum;*/
        /*int n=nums.size();
        int prefix[n+1];
        prefix[0]=0;
        for(int i=1;i<=n;i++){
            prefix[i]=prefix[i-1]+nums[i-1];
        }
        int maxsum=INT_MIN;
        for(int i=1;i<=n;i++){
            int sum=0;
            for(int j=0;j<i;j++){
                sum=prefix[i]-prefix[j];
                maxsum=max(sum,maxsum);
            }
        }
        return maxsum;*/
        int sum=0;
        int maxsum=nums[0];
        for(int i=1;i<=nums.size();i++){
            sum=sum+nums[i-1];
            maxsum=max(sum,maxsum);
            if(sum<0){
                sum=0;
            }
            
        }
        return maxsum;

    }
};
