/*

There are two sorted arrays nums1 and nums2 of size m and n respectively.

Find the median of the two sorted arrays. The overall run time complexity should be O(log (m+n)).

You may assume nums1 and nums2 cannot be both empty.

Example 1:

nums1 = [1, 3]
nums2 = [2]

The median is 2.0
Example 2:

nums1 = [1, 2]
nums2 = [3, 4]

The median is (2 + 3)/2 = 2.5

*/


class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector <double> newVec;
        for(int i = 0; i < nums1.size(); i++){
            newVec.push_back(nums1[i]);
        }
        
        for(int i = 0; i < nums2.size(); i++){
            newVec.push_back(nums2[i]);
        }
        
        int temp;
        for(int i = 0; i < newVec.size(); i++){
                if(newVec[i] > newVec[i+1]){
                    temp = newVec[i];
                    newVec[i] = newVec[i+1];
                    newVec[i+1] = temp;
                }
        }
        bool isEven;
        if(newVec.size() % 2 == 0)
            isEven = true;
        else
            isEven = false;
            
        int index1, index2;
        if(newVec.size() == 0 || newVec.size() == 1 || newVec.size() == 2)
            isEven = true;
        if(isEven){
            index1 = (newVec.size() / 2) - 1;
            index2 = index1 + 1;
            return double(newVec[index1] + newVec[index2]) / 2;
        }
        else{
            index1 = newVec.size() / 2;
            return double(newVec[index1]);
        }
    }
};
