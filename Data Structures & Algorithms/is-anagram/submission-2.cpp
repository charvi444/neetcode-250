class Solution {
public:
    bool isAnagram(string s, string t) 
    {
        int l= s.length();
        int m= t.length();
        if(l!=m)
            return false;
        unordered_map<char,int> mpp2;
        for(int i=0;i<m;i++)
        {
            mpp2[t[i]]++;
        }
        for(int i=0;i<l;i++)
        {
            if(mpp2.find(s[i])!= mpp2.end())
            {
                if(mpp2[s[i]]==0)
                    return false;
                mpp2[s[i]]--;
            }
            else
                return false;
        }
        return true;
    }
};
