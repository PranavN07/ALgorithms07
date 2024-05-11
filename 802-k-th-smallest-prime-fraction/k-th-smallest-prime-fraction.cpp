class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<vector<double>> np;
        for(int i=0;i<arr.size()-1;i++){
          for(int j=i+1;j<arr.size();j++){
            double div = (double)arr[i]/arr[j];
            np.push(vector<double>{div,(double)arr[i],(double)arr[j]});
            if(np.size()>k){
                np.pop();
            }
          }  
        }
        auto vec = np.top();
        vector<int> result(2);
        result[0] = vec[1];
        result[1] = vec[2];

        return result;
        
    }
};