class Solution {
public:
    int jump(vector<int>& nums) {
        int count=0,current_idx = 0,farthest =0;

        for(int i=0;i<nums.size()-1;i++){
            farthest = max(farthest,i+nums[i]);
//here you are justt countinh that in the current range , what is the number that you can jump farthest.
            if (i==current_idx){
                count++;
                current_idx = farthest;
            }
        }
        return count; 

    }
};