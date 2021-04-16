class NumArray {
    
    
   int arr[10001]={0};
public:
    NumArray(vector<int>& nums) {
        
        int n = nums.size();
        
        
        
         for(int i=0;i<n;i++)arr[i+1]=arr[i]+nums[i];
        
        
        
    }
    
    int sumRange(int left, int right) {
        
        
       return arr[right+1]-arr[left];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
