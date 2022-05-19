class NumArray 
{
public:
    int fen[30002] = {0} ; 
    void update(int index, int val) 
    {
        index ++ ; 
        int add = val - (sum(index)-sum(index-1)) ; 
        while(index<=30001)
        {
            fen[index] += add ; 
            index = index + (index & (-index)) ; 
        }
    }
    int sum(int i)
    {
        int s = 0 ; 
        while(i>0)
        {
            s += fen[i] ; 
            i = i - (i & (-i)) ; 
        }
        return s ; 
    }
    int sumRange(int left, int right) 
    {
        left ++  ; 
        right ++ ; 
        return sum(right) - sum(left-1) ;
    }
    NumArray(vector<int>& nums) 
    {
        int n = nums.size() ; 
        for(int i=0;i<n;i++)
        {
            update(i,nums[i]) ;
        }
    }
};
