class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
     vector<int> merged(nums1);
        int temp = nums1.size()+nums2.size(),i=0,j=0;
        double median;
        // while(i<nums1.size() && j<nums2.size()){
        //     if(nums1[i]<nums2[j]){
        //         merged.push_back(nums1[i]);
        //         i++;
        //     }
        //     else{
        //         merged.push_back(nums2[i]);
        //         j++;
        //     }}
        // while(i<nums1.size()){
        //     merged.push_back(nums1[i]);
        //         i++;
        // }
        // while(j<nums2.size()){
        //     merged.push_back(nums2[j]);
        //         j++;
        // }
        for(auto& it:nums2){
            merged.push_back(it);
        }
        sort(merged.begin(),merged.end());
        for(auto& it:merged){
            cout<<it;
        }
        if(temp%2==0){
            median = ((double)(merged[temp/2-1]+merged[temp/2]))/2;
        }
        else{
            median = (double)merged[temp/2];
        }
        return median;
        }
};