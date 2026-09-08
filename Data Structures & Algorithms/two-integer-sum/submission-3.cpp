class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int,int> unm;

        for (int i=0;i<nums.size();i++){
            unm[nums[i]]=i;
        }
        int final=0;
        for(int i=0;i<nums.size();i++){
            int temp = nums[i];
            if(unm.find(target-temp)!=unm.end() && (i)!=unm[target-temp]){
                vector<int> a = {i,(int)(unm[target-temp])};
                return a;
            }
        }  
    }      
};
