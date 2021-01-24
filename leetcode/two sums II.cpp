class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
      int l=0, r=numbers.size()-1, s=0;
        
        vector<int>ans;
        
        while(l<r)
        {
            s=numbers[l]+numbers[r];
            
            if(s<target)l++;
            
            else if(s>target)r--;
            
            else {ans.push_back(l+1);ans.push_back(r+1); break;}
        }
        
        return ans;
    
        
    }
};
