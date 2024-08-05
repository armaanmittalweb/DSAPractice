// Problem Link: https://leetcode.com/problems/kth-distinct-string-in-an-array
class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        int n = arr.size();
        int x = 0;
        int count = 0;
        for(int i = 0;i<n;i++){
            x = 0;
            for(int j = 0;j<n;j++){
                if(arr[i] == arr[j] && i!=j){
                    x = 1;
                    break;
                }
            }
            if(x == 0){
                count++;
                if(count == k){
                    return arr[i];
                }
            }

        }
        return "";
    }
};
