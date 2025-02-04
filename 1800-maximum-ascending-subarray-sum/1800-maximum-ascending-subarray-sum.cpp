class Solution {
public:
    int maxAscendingSum(vector<int>& arr) {
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];

            if(maxi < sum){
                maxi=sum;
            }
            if(arr[i]>=arr[i+1]){
                sum=0;
            }
        }
        return maxi;
    }
};