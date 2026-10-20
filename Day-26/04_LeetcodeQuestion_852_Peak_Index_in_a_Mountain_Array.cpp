#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {

        //Initialize search boundaries
        int start=0;
        int end=arr.size()-1;

        //Prevent integer overflow when calculating mid.
        int mid=start+(end-start)/2;

        while(start<end){

            //If true, we are on the ascending slope. The peak lies strictly to the right.
            if(arr[mid]<arr[mid+1]){
                start=mid+1;
            }

            //Otherwise, we are on the descending slope or exactly at the peak. 
            //'mid' could be the peak, so we include it (end = mid).
            else{
                end=mid;
            }
            mid=start+(end-start)/2;
        }
        
        //When the loop ends, start == end, pointing exactly at the peak.
        return start;
    }
};