class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if (s1 == s2) return true;

        unordered_map<char,int>freq1,freq2;
        vector<int>diffIndices;

        for (int i = 0; i < s1.length(); i++) {
            freq1[s1[i]]++;
            freq2[s2[i]]++;
            if (s1[i] != s2[i]) diffIndices.push_back(i);
        }

        if (freq1 != freq2) return false;
        return diffIndices.size() == 2 && s1[diffIndices[0]] == s2[diffIndices[1]] &&
               s1[diffIndices[1]] == s2[diffIndices[0]];
    }
};