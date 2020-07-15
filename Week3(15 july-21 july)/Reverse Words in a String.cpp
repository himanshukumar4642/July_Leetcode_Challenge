class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> ans;
        while(ss>>word){
            ans.push_back(word);
        }
        reverse(ans.begin(),ans.end());
        string res="";
        for(string x:ans){
            res+=x;
            res+=" ";
        }
        res.erase(remove(res.end()-1,res.end(),' '),res.end());
        return res;
    }
};
