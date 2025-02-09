class Solution {
public:
    long long countBadPairs(vector<int>& nums) {
        long long count=0;
        long long n=nums.size();
        unordered_map<int,int>mp;
        long long totalPairs=(n*(n-1)/2),goodPairs=0;

        for(int i=0;i<n;i++){
            if(mp[i-nums[i]]){
                goodPairs+=mp[i-nums[i]];
            }

            mp[i-nums[i]]++;
        }
        return totalPairs-goodPairs;
    }
};