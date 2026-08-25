class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) 
    {
        int n= strs.size();
        if(n==0)
            return "";
        string word= strs[0];
        string ans="";
        for(int i=1;i<n;i++)
        {
            ans= "";
            string check= strs[i];
            for(int j=0;j<word.length();j++)
            {
                if(word[j]==check[j])
                    ans= ans+word[j];
                else
                    break;
            }
            word= ans;
        }
        return word;
    }
};