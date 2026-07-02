//1281. Subtract the Product and Sum of Digits of an Integer

class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0;
        int pro = 1;

        while(n!= 0){
            int digit = n%10;
            sum += digit;
            pro = pro * digit;

            n = n/10;
        }
        int result = pro - sum;
        
        return result;
    }
};