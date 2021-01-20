class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int n = nums.size();

        int s=0,ans=0,m=-99999999;
  if(n==1) return nums[0];
       
        for(int i=0;i<n;i++)
        {
            if(nums[i]>=0)break;
            
            m=max(m,nums[i]);
            
            if(i==n-1)return m;
        }

   for(int i=0;i<n;i++)
   {
       s=max(0,s+nums[i]);
       

	ans=max(ans,s);
}

return ans;
        
        
    }
};
