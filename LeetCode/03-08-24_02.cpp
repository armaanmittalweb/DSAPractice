// Problem Link: https://leetcode.com/problems/make-two-arrays-equal-by-reversing-subarrays
class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        sort(target.begin(),target.end());
        sort(arr.begin(),arr.end());
        int n = target.size();
        for(int i=0;i<n;i++){
            if(arr[i] != target[i]){
                return false;
            }
        }
        return true;
    }
};
