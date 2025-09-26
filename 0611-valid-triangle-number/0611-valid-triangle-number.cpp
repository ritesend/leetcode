class Solution {
public:
    int triangleNumber(vector<int>& nums) {
        int cnt=0;
        int sum=0;
        int n=nums.size();
        int i=0;
        int k=0;
        int j=n-1;
        sort(nums.begin(),nums.end());

        for(int j=n-1;j>=2;j--){
            i=0; 
            k=j-1;

            while(i<k){
                sum=nums[i]+nums[k];
                if(sum>nums[j]){
                    cnt+=(k-i);
                    k--;
                }
                else{
                    i++;
                }
            }
                       
            
        }
        return cnt;
    }
};