#include<iostream>
#include <vector>
using namespace std;
class solution{
private:
    void solve(string digit, string output, int index, vector<string>& ans, string mapping){
        //base case
        if(index>=digit.length()){
            ans.push_back(output);
            return;
        }

        int number = digit[index] - '0';
        string value = mapping[number];

        for(int i=0; i<=value.length(); i++){
            output.push_back(value[i]);
            solve(diigit, output,index+1,ans, mapping);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombination(string digits){
        vector<string> ans;
        string output;
        int index = 0;
        string mapping = ["","", "abc", "def","ghi","jkl","mno","pqrs","tuv","wxyz"];
        solve(digit, output, index, ans, mapping);
        return ans;
    }
};