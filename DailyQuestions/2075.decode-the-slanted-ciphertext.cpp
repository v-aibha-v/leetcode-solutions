/*
 * @lc app=leetcode id=2075 lang=cpp
 *
 * [2075] Decode the Slanted Ciphertext
 */

// @lc code=start
class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int len=encodedText.length(),col=len/rows;
        // vector<vector<char>> vec(rows,vector<char> (col,' '));
        // for(int i=0;i<rows;i++){
        //     for(int j=0;j<col;j++) {
        //         vec[i][j]= encodedText[i*col  + j];
        //     }
        // }
        // string ans="";
        // for(int ii=0;ii<col;ii++){
        //     int j=0,i=ii;
        //     while(j<rows and i<col){
        //         int tr=j,tc=i;
        //          ans+=vec[tr][tc];
        //         j++;i++;
        //     }
        // }
        // while (!ans.empty() && ans.back() == ' ')  ans.pop_back();
        string ans="";
        for(int ii=0;ii<col;ii++){
            int j=0,i=ii;
            while(j<rows and i<col){
                int val=j*col + i;
                if(val<len){
                    // char temp= j*col + i;
                    ans+=encodedText[val];
                    j++;i++;
                }
            }
        }
        while (!ans.empty() && ans.back() == ' ')  ans.pop_back();

        return ans;
    }
};
// @lc code=end

