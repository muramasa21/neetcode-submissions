class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        vector <int> vec = nums;
        if(vec.size()==0){
            return 0;
        }
        int final=1;
        sort(vec.begin(),vec.end());
        int temp=1;
        for(int i=1;i<vec.size();i++){
            if(vec[i]-vec[i-1]==1 ){
                temp++;
                final=max(final,temp);
            }
            else if(vec[i]-vec[i-1]==0){
                continue;
            }
            else{
                temp=1;
            }
        }

        return final;
    }
};
