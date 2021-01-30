class Solution {
public:
    int reverse(int x) {
        
        
    long long l=pow(2,31);
       
        
             long long a =abs(x),t,ans=0;
        
            while(a>0)
            {
                t=a%10;
                
                ans=ans*10+t;
                if(ans > l)return 0;
                
                a/=10;
            }
            
            if(x>0)return ans;
            
            else return ans*-1;
            
        
        
    
        
    }
};
