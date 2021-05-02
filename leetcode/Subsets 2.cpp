class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        int n = nums.size();
        int tot = pow(2,n);
        vector<vector<int>>ans;
        
        for(int i=0;i<tot;i++)
        {
            vector<int>t;
            for(int j=0;j<n;j++)
            {
                if(i & (1<<j))t.push_back(nums[j]);
            }
            sort(t.begin(),t.end());
            ans.push_back(t);
        }
        
        sort(ans.begin(), ans.end());
        ans.erase(std::unique(ans.begin(), ans.end()), ans.end());
       return ans;
        
        
    }
};
