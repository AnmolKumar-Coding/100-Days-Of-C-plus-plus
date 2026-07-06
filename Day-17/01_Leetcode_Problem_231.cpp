#include <limits.h>

class Solution {
public:
    bool isPowerOfTwo(int n) {

        int ans = 1;

        for (int i = 0; ans <= n; i++){

            if(ans == n){
                return true;
            }
            if( (ans >= INT_MAX/2) || ( ans <= INT_MIN/2)){
                return false;
            }

            ans *= 2;

        }
        return false;
    }
};