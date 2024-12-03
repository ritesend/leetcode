class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        string ans="";
        int j=0;
        int i;
        for(i=0;i<s.size() && j<spaces.size();i++){
            if(i==spaces[j]){
                ans+=' ';
                j++;
            }
            ans+=s[i];
        }

        while(i<s.size()){
            ans+=s[i];
            i++;
        }

        return ans;

    }
};