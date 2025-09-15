class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char> broken(brokenLetters.begin(), brokenLetters.end());
       int cnt=0;
       string temp="";

       for(int i=0;i<=text.size();i++){
        if(i<text.size() && text[i]!=' '){
            temp+=text[i];
        }
        else{
            if(!temp.empty()){
                bool cantype=true;
                for(char c:temp){
                    if(broken.count(c)){
                        cantype=false;
                        break;
                    }
                }
                if(cantype==true){
                    cnt++;
                }
                temp="";
            }
        }
       } 
       return cnt;
    }
};