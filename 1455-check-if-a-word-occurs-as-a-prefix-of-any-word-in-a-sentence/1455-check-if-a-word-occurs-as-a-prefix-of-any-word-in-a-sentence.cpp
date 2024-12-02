class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        int count=1;
        string temp="";
        for(int i=0;i<=sentence.size();i++){
            
            if(i == sentence.size() || sentence[i] == ' '){
                if (temp.find(searchWord) == 0) {
                    return count;
                }
                temp = "";
                count++;
            }
            else {
                temp += sentence[i];
            }
           

        }
        return -1;
    }
};