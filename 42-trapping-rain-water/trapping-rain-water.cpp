class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int left_max=0;
        int right_max=0;
        int l=0,r=n-1;
        int total=0;
        while(l<r){
            if(height[l]<=height[r]){
                if(left_max>height[l]){
                    total+=left_max-height[l];
                }
                else{
                    left_max=height[l];
                }
                l=l+1;
            }
            else{
                if(right_max>height[r]){
                    total+=right_max-height[r];
                }
                else{
                    right_max=height[r];
                }
                r=r-1;
            }
        }
        return total;

    }
};