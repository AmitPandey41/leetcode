class Solution {
public:
    int pivotIndex(vector<int>& arr) {
        int n = arr.size();
        if(n == 1) return 0;
        
        int TotalSum = 0;
        for(auto i : arr){
            TotalSum += i;
        }

        int leftSum = 0;
        int idx = -1;
        for(int i=0;i<n;i++){
            int rightSum = TotalSum - leftSum - arr[i];

            if(leftSum == rightSum){
                idx = i;
                break;
            }

            leftSum += arr[i];
        }

        return idx;
    }
};