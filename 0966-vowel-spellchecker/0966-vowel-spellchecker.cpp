class Solution {
public:
    string lower(string word){
        string temp="";
        for(char c:word){
            temp+=tolower((unsigned char)c);
        }
        return temp;
    }

    string vowel(string word){
        string temp="";
        for(auto ch:word){
            if(ch=='a' ||ch=='e' ||ch=='i' ||ch=='o' ||ch=='u'){
                temp+='*';
            }
            else{
                temp+=ch;
            }
        }
        return temp;
    }
    vector<string> spellchecker(vector<string>& wordlist, vector<string>& queries) {
        unordered_map<string,string>mp1;
        unordered_map<string,string>mp2;
        unordered_map<string,string>mp3;

        vector<string>ans;

        for(auto x:wordlist){
            mp1[x]=x;
        }

        for(auto x:wordlist){
            if(mp2.find(lower(x))==mp2.end()){
                mp2[lower(x)]=x;
            }
        }

        for(auto x:wordlist){
            if(mp3.find(vowel(lower(x)))==mp3.end()){
                mp3[vowel(lower(x))]=x;
            }
        }

        for(auto x:queries){
            string temp=x;
            if(mp1.find(temp)!=mp1.end()){
                ans.push_back(x);
            }
            else if(mp2.find(lower(temp))!=mp2.end()){
                ans.push_back(mp2[lower(temp)]);
            }
            else if(mp3.find(vowel(lower(temp)))!=mp3.end()){
                ans.push_back(mp3[vowel(lower(temp))]);
            }
            else{
                ans.push_back("");
            }
        }

        return ans;
    }
};