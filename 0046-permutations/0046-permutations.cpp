class Solution {
public:
    vector<vector<int>> ans;
    vector<int> current;
    void func(vector<int>& nums,vector<bool>con){
        if(current.size()==nums.size()){
            ans.push_back(current);
            return;
        }
        for(int i=0;i<nums.size();i++){
            if(con[i]==false)continue;
            current.push_back(nums[i]);
            con[i]=false;
            func(nums,con);
            con[i]=true;
            current.pop_back();
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<bool>con(nums.size(),true);
        func(nums,con);
        return ans;
    }
};