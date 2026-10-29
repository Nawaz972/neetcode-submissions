class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length())    return false; 
        unordered_map<char, int> mps, mpt;
        for(int i = 0; i < s.length(); i++)
        {
            mps[s[i]]++;
        }
        for(int i = 0;i < t.length(); i++)
        {
            mpt[t[i]]++;
        }
        for(auto x : mps)
        {
            if(mpt.find(x.first) == mpt.end())   return false;
            if(x.second != mpt[x.first])   return false;
        }
        return true;
    }
};
