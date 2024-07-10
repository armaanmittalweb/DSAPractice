// Problem Link: https://leetcode.com/problems/crawler-log-folder/
class Solution {
public:
    int minOperations(vector<string>& logs) {
        int n = logs.size();
        bool ifMain = true;
        int depth = 0;

        for(int i =0;i<n;i++ ){

            if(logs[i] == "../"){
                if(ifMain){
                    continue;
                }
                else{
                    depth -= 1;
                    if(depth == 0){
                        ifMain = true;
                    } 
                }
            }
            else if(logs[i] == "./") {
                continue;
            }
            else{
                depth += 1;
                ifMain = false; 
            }
        }

        return depth; 
    }
};
