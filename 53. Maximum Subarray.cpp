class Solution {
public:
    int maxSubArray(vector<int>& nums) 
    {
        int ans1 = 0 , ans2 = -100000000; 
        int temp = 0 ; 
        for(int i=0;i<nums.size();i++)
        {
            temp += nums[i] ; 
            if(temp<0) temp = 0 ; 
            ans1 = max(ans1,temp) ; 
            ans2 = max(ans2,nums[i]) ; 
        }
        if(ans1==0) return ans2 ;
        return ans1 ; 
    }
};
