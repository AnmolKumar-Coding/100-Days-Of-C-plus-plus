class Solution {
public:
    int mySqrt(int x) {

        // Use long long int to prevent integer overflow during (mid * mid) calculations.
        long long int s = 0;
        long long int e = x;

        // Calculate midpoint using subtraction to prevent potential boundary overflow.
        long long int mid = s + (e - s)/2;

        // Loop runs until the search window pointers cross each other.
        while(s <= e){

            // Case 1: Perfect square found.
            if((mid*mid) == x){
                return mid;
            }

            // Case 2: mid squared is smaller than target.
            // Move 's' rightward to look for a larger, closer root.
            else if(mid*mid < x){
                s = mid + 1;
            }

            // Case 3: mid squared exceeds the target.
            // Move 'e' leftward to scale down the search space.
            else if((mid*mid) > x){
                e = mid - 1;
            }

            // Recalculate midpoint for the narrowed window.
            mid = s + (e - s)/2;
        }

        // When the loop breaks without finding a perfect square,
        // 'e' naturally converges onto the floor value (truncated integer root).
        return e;
    }
};