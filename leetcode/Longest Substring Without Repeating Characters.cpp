class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        int n=s.length(),ans=0;
        
        for(int i=0;i<n;i++)
        {  
            int t=0;
             unordered_map<char,int>mp;
            for(int j=i;j<n;j++)
            {
               
                mp[s[j]]++;
                
                if(mp[s[j]]==1)
                {
                    t++;
                   
                    ans=max(ans,t);
                }
                else{ break;}
                
                
            }
        }
        
        return ans;
        
    }
};
