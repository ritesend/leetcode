class Solution {
private:
    bool matchPattern(string ans, string pattern){
        for(int i=0 ; i<pattern.length() ; i++){
            if ((pattern[i] == 'I' && ans[i] > ans[i+1]) || (pattern[i] == 'D' && ans[i] < ans[i+1])){
                return false;
            }
        }
        return true;
    }
public:
    string smallestNumber(string pattern) {
        int n = pattern.length();
        string ans = "";
        for(int i=1 ; i<=n+1 ; i++){
            ans.push_back(i+'0');
        }
        while (!matchPattern(ans, pattern)){
            next_permutation(ans.begin(), ans.end());
        }

        return ans;
    }
};