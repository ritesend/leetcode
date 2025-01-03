class Solution {
public:
    int waysToSplitArray(vector<int>& arr) {
        int n=arr.size();
        int cnt=0;
        int totalSum=0;

        for(int i=0;i<n;i++){
            totalSum+=arr[i];
        }

        long long leftSum=0;

        for(int i=0;i<n-1;i++){
            leftSum+=arr[i];
            long long rightSum=totalSum-leftSum;

            if(leftSum>=rightSum){
                cnt++;
            }
        }
        return cnt;
    }
};