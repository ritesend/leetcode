class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        
        int n=nums.size();
        vector<int>left,right;
        int pivotOcc=0;

        for(int i=0;i<n;i++){
            if(nums[i]==pivot){
                pivotOcc++;
            }
            if(nums[i]<pivot){
                left.push_back(nums[i]);
            }
            else{
                right.push_back(nums[i]);
            }
        }
        vector<int>ans;

        for(auto x:left){
            ans.push_back(x);
        }

        while(pivotOcc--){
            ans.push_back(pivot);
        }

        for(auto x:right){
            if(x!=pivot){
                ans.push_back(x);
            }
        }

        return ans;
    }
};