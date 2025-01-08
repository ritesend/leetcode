class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int cnt=0;
        int n=words.size();

        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                cnt+=(words[j].starts_with(words[i]) && words[j].ends_with(words[i]));
            }
        }
        return cnt;
    }
};