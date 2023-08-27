// POTD_GFG 27-08-2023

class Solution
{
    public:
    string reverseWord(string str)
    {
        int n=str.length();
        for(int i=0;i<n/2;i++)
        {
            swap(str[i],str[n-i-1]);
        }
         return str;
    }
};
