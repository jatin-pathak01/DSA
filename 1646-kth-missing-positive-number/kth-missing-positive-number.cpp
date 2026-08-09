class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        int mid=-1;
        int l=0,r=n-1;
        while(l<=r){
            mid=l+(r-l)/2;
            int kitne_missing_no=arr[mid]-(mid+1);
            if(kitne_missing_no<k){
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }
        return k+l;
    }
};