class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <int,int> a;
        unordered_map <int,int> b;

        for(int i =0; i<s.size(); i++){
            a[s[i]]++;
        }
        
        
        for(int j =0; j<t.size(); j++){
            b[t[j]]++;
        }

        if(a == b) return true;

        return false;



    }
};