class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map<string,int> np;
        for(int i=0;i<arr.size();i++){
            np[arr[i]]++;
        }
        int i=0;
        int count = 0;
        while(i<arr.size()){
            if(np[arr[i]]==1){
                count++;
                if(count == k){
                    return arr[i];
                }

            }
           i++;
        }
        return "";
    }
};