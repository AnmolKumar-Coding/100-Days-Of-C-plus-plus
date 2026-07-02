class Solution {
public:
    int hammingWeight(int n) {

        int a = 0;

        while(n>0){

            if(n&1 == 1){
                
                a++;
            }
            n = n>>1;
        }
        return a;
    }
};