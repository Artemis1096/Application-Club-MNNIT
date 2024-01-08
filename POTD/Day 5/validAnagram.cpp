/* Given two strings s and t, return true if t is an anagram of s, and false otherwise.
An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, 
typically using all the original letters exactly once.
*/ 
bool isAnagram(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        map<char,int> x;
        for(int i=0;i<s.length();i++)
            x[s[i]]++;

        for(int i=0;i<t.length();i++)
            x[t[i]]--;

        for(auto i:x){
            if(i.second!=0){
                return false;
            }
        }
        return true;
    }