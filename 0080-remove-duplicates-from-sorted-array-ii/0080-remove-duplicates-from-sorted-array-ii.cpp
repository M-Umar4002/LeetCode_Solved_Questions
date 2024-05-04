class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Approach 1:
        // for(int i = 0; i < nums.size() - 1; i++) {
        //     if(nums[i] == nums[i+1]) {
        //         i++;
        //         if(i < nums.size() - 1) {
        //             while(nums[i] == nums[i+1] && i < nums.size() - 1) {
        //                 nums.erase(nums.begin() + i);
        //             }
        //         }
        //     }
        // }
        // return nums.size();

        // Approach 2:
        int size = 1;

        for(int i = 1; i < nums.size(); i++) {
            if(size == 1 || nums[i] != nums[size - 2]) {
                nums[size++] = nums[i];
            }
        }
        return size;
    }
};