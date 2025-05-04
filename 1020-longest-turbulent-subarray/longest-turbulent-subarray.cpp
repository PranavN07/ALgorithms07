class Solution {
public:
    int maxTurbulenceSize(vector<int>& arr) {
        int ans = 1;
        int smaller =1;
        int large = 1;
        for(int i=0;i<arr.size()-1;i++){
            if(arr[i]<arr[i+1]){
               smaller = smaller+1;
               large =1;
            }
            else if(arr[i]>arr[i+1]){
                large = large+1;
                smaller =1;
            }
            else{
                large = 1;
                smaller =1 ;
            }

            ans = max(ans,max(large,smaller));


            swap(smaller,large);
        }
        return ans;

        
    }
    
};