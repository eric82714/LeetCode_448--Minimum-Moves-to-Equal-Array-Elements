class Solution {
public:
    long sum(vector<int>& nums) {
        long sum = 0;
        for(auto& n : nums)
            sum += n;
        
        return sum;
    }
    
    int min(vector<int>& nums) {
        return *min_element(nums.begin(), nums.end());
    }
        
    int minMoves(vector<int>& nums) {
        return sum(nums) - min(nums) * nums.size();
    }
};
