class Solution {
public:
    int maxScore(string s) {
        int n=s.size();
        vector<int>prefixL(n);
        vector<int>prefixR(n);

        prefixL[0]=(s[0]=='0');
        prefixR[n-1]=(s[n-1]=='1');

        for(int i=1;i<n;i++){
            prefixL[i]=prefixL[i-1]+(s[i]=='0');
        }

        for(int i=n-2;i>=0;i--){
            prefixR[i]=prefixR[i+1]+(s[i]=='1');
        }

        int ans=0;

        for(int i=0;i<n-1;i++){
            ans=max(prefixL[i]+prefixR[i+1],ans);
        }

        return ans;
    }
};