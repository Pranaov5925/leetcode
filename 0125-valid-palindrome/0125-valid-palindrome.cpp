class Solution {
public:
    bool isPalindrome(string s) {

        string temp;
        for(char c: s){
            if(isalnum(c)){
                c = tolower(c);
                temp += c;
            }
        }

        for(int i=0;i<temp.size()/2;i++){
            if(temp[i] != temp[temp.size()-i-1]) return false;
        }
        return true;
    }
};