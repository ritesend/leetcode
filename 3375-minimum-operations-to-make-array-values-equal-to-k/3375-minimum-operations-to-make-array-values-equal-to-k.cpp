class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        if(nums[0]<k) return -1;
        int x=0;
        set<int>s;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>k){
                s.insert(nums[i]);
            }
        }
        return s.size();
    }
};