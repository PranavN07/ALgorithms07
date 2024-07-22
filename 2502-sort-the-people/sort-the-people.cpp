class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights){
        int n = names.size();
        vector<pair<int,string>>gh(n);
        for(int i=0;i<n;i++){
            gh[i] = {heights[i],names[i]};
        }
        sort(gh.begin(),gh.end(),greater<>());
        for(int i =0;i<n;i++)
          names[i]=gh[i].second;
        return names;
 };
};