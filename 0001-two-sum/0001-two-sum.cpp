class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int>mpp;

        // for(int i=0;i<nums.size();i++){
        //     mpp[nums[i]]=i;
        // }

        for(int i=0;i<nums.size();i++){
            int ans = target - nums[i];
            if(mpp.find(ans) != mpp.end()){
                return {i,mpp[ans]};
            }
            mpp[nums[i]]=i;
        }
        return {-1,-1};
    }
};