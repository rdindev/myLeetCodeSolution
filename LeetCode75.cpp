
//SORT COLORS

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int noOfZeros = 0;
        int noOfOne = 0;
        int noOfTwo = 0;
//       finding no of zeros, ones and two s in the array
        for(int i = 0; i<nums.size(); i++){
            if(nums[i] == 0){
                noOfZeros++;
            }
            else if(nums[i] == 1){
                noOfOne++;
            }
            else{
                noOfTwo++;
            }
        }
//         filling the array with zeros till the no of zeros
        for(int  i = 0; i<noOfZeros; i++){
            nums[i] = 0;
        }
//         filling the next elements with one with no of ones
        for(int i = noOfZeros; i<(noOfOne + noOfZeros); i++){
            nums[i] = 1;
        }
        for(int i = (noOfZeros+ noOfOne); i<nums.size(); i++){
            nums[i] = 2;
        }
    }
};
