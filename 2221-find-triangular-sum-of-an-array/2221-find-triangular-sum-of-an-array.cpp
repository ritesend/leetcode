class Solution {
public:
    int triangularSum(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }

        int i=nums.size();

        while(i>1){
            for(int j=0;j<i-1;j++){
                nums[j]=(nums[j]+nums[j+1])%10;
            }
            i--;
        }

        return nums[0];
    }
};