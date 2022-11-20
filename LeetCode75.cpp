
//SORT COLORS

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int noOfZeros = 0;
        int noOfOne = 0;
        int noOfTwo = 0;
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
        for(int  i = 0; i<noOfZeros; i++){
            nums[i] = 0;
        }
        for(int i = noOfZeros; i<(noOfOne + noOfZeros); i++){
            nums[i] = 1;
        }
        for(int i = (noOfZeros+ noOfOne); i<nums.size(); i++){
            nums[i] = 2;
        }
    }
};
