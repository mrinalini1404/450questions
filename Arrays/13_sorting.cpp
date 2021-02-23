class Solution {
public:
        vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<int>temp(2);
        vector<vector<int>> t;
        sort(intervals.begin(),intervals.end());
        if(intervals.size()==0) return t;
        temp[0]=intervals[0][0];
        temp[1]=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(temp[1]>=intervals[i][0]){
                temp[1]=max(intervals[i][1],temp[1]);
                
            }else{
                t.push_back(temp);
                temp[0]=intervals[i][0];
                temp[1]=intervals[i][1];
            }
        }
        t.push_back({temp[0],temp[1]});  
        return t;
    }
};
