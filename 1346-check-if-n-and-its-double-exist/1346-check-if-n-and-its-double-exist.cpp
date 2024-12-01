class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int i=0;
        int j=arr.size()-1;
        //sort(arr.begin(),arr.end());

        while(i<j){
            if(arr[i] == 2*arr[j] || arr[j] * 2 == arr[i]){
                return true;
            }
            else if(arr[i]*2 < arr[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return false;
    }
};