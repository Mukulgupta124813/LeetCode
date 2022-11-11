class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> temp(nums);
        nums.clear();
        nums.push_back(temp[0]);
        for(int i=1;i<temp.size();i++){
            if(nums[i-1]!=temp[i]){
                nums.push_back(temp[i]);
            }
        }
        return nums.size();
    }
};