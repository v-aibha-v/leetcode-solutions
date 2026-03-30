class Solution {
public:
    bool checkStrings(string s1, string s2) {
        //freq diff for even and odd idx
        vector<int> even(26, 0), odd(26, 0);
        int n = s1.length();
        for (int i = 0; i < n; ++i) {
            //update freq
            if (i % 2 == 0) {
                even[s1[i] - 'a']++;
                even[s2[i] - 'a']--;
            } else {
                odd[s1[i] - 'a']++;
                odd[s2[i] - 'a']--;
            }
        }
        //if all freq =0 -> strings are equivalent
        for (int i = 0; i < 26; ++i) {
            if (even[i] != 0 or odd[i] != 0)
                return false;
        }
        return true;
    }
};
