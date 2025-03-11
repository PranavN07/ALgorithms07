class Solution {
public:
    bool isDistinct(vector<string> &arr, int index){
        return count(arr.begin(),arr.end(),arr[index])==1;
    }
    string kthDistinct(vector<string>& arr, int k) {
        int distinctC = 0;
        for(int i=0;i<arr.size();i++){
            if(isDistinct(arr,i)){
                distinctC++;
                if(distinctC == k){
                    return arr[i];
                }
            }
        }
        return "";
    }
};