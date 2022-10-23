class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<vector<int>>ans;
        set<vector<int>>s;
        sort(nums.begin(), nums.end());
        
        for(int i=0; i<n-3; i++){
            long long target1 = target-nums[i];
            for(int j=i+1; j<n-2; j++){
                long long target2 = target1-nums[j];
                int k = j+1;
                int l = n-1;
                
                while(k<l){
                    long long val = nums[k]+nums[l];
                    if(val == target2){
                        s.insert({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;
                    }
                    else if(val > target2)
                        l--;
                    else
                        k++;
                }
            }
        }
        
        for(auto &i : s)
            ans.push_back(i);
        
        return ans;
    }
};
