class Solution {
public:
    string gcdOfStrings(string str1, string str2) 
    {
        string s1, s2;
        s1 = str1;
        s2 = str2;
        if (s1.length() > s2.length())
        {
            swap(s1, s2);
        }
        string comp = s1;
        int i = 1;
        while (true)
        {
            int len = s1.length()/i;
            string temp = s1.substr(0, len);
            string comp1, comp2;
            while (comp1.length() < s1.length())
            {
                comp1 += temp;
            }
            while (comp2.length() < s2.length())
            {
                comp2 += temp;
            }
            if (comp2 == s2 && comp1 == s1)
            {
                return temp;
                break;
            }
            if (len == 1)
            {
                break;
            }
            //cout << comp << '\n';
            i++;
        }
        return "";   
    }
};