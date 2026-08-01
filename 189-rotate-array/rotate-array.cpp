class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        int i=0;
        int j=n-1;
        while(i<j){
            swap(nums[i],nums[j]);
            i++;
            j--;
        }
        int left=0;
        int right=k-1;
        while(left<right){
            swap(nums[left],nums[right]);
            left++;
            right--;
        }
        int secodndhalf=k;
        int last=n-1;
        while(secodndhalf<last){
            swap(nums[secodndhalf],nums[last]);
            secodndhalf++;
            last--;
        }
    }
};