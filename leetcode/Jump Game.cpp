class Solution {
public:
    bool canJump(vector<int>& nums) {
        
             int n=nums.size();
             
        if(nums[0]==0 && n>1)return false;
   
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]==0)
            {
                int a=1;
                for(int j=i-1;j>=0;j--)
                {
                    if(nums[j]>a)break;
                    a++;
                    
                    if(j==0)return false;
                }
            }
        }
        
        return true;
    }
};
