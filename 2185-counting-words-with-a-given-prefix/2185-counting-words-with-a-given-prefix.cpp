class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int cnt=0;
        int n=words.size();
        for(int i=0;i<n;i++){
            if(words[i].find(pref)!=string::npos && words[i].starts_with(pref)){
                cnt++;
            }
        }
        return cnt;
    }
};