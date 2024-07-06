// Problem Link: https://leetcode.com/problems/alternating-groups-i/description/
class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& colors) {
        int ans = 0;
        int n = colors.size();
        if(n<3){
            return 0;
        }
        if((colors[n-1] == colors[1]) && (colors[0] != colors[1])){
            ans++;
        }
        if((colors[n-2] == colors[0]) && (colors[0] != colors[n-1])){
            ans++;
         }
        for(int i = 1; i<n-1; i++){
            
            if(colors[i-1] == colors[i+1] && colors[i]!=colors[i-1]){
                ans++;
            }
        }
        return ans;
    }
};
