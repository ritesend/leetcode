class Solution {
public:
    int maxFreqSum(string s) {
        unordered_map<char,int>mp1;
        unordered_map<char,int>mp2;

        
        int cons=0;
        int vow=0;

        for(auto x:s){
            if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u'){
                mp1[x]++;
            }else{
                mp2[x]++;
            }
        }

       

        for(auto x:mp1){
            if(x.second>vow){
                vow=x.second;
            }
        }

        for(auto x:mp2){
            if(x.second>cons){
                cons=x.second;
            }
        }



        return vow+cons;
    }
};