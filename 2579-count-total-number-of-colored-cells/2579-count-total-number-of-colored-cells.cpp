class Solution {
public:
    long long coloredCells(int n) {
        if(n == 1) return 1;
        long long ans=1;
        while(n>1){
            ans += 4 + ((n-2) * 4);
            n--;
        }
        return ans;
    }
};