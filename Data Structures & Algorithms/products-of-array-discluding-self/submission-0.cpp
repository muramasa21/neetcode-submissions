class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod=1;
        
        vector <int> zeroes;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0) prod*=nums[i];
            else    zeroes.push_back(i);
        }
        vector <int> final(nums.size(),0);
        if(zeroes.size()>1){   
            return final;
        }
        if(zeroes.size()==1){
            final[zeroes[0]]=prod;
            return final;
        }
        for(int i=0;i<nums.size();i++){
            final[i]=prod/nums[i];
        }
        return final;

    }
};
