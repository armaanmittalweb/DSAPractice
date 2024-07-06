// Problem Link: https://leetcode.com/problems/pass-the-pillow/\
class Solution {
public:
    int passThePillow(int n, int time) {
        // int x = 0;
        // int ans = 1;
        // while(time){
        //     if(x==0){
        //         ans++;
        //         time--;
        //         if(ans==n){
        //             x=1;
        //         }
        //     }
        //     else if(x==1){
        //         ans--;
        //         time--;
        //         if(ans == 1){
        //             x=0;
        //         }
        //     }
        // }
        // return ans;

        int rotations = time/(n-1);
        int leftovers = time%(n-1);

        if(rotations%2 == 0){
            return leftovers+1;
        }else{
            return n-leftovers;
        }
    }
};
