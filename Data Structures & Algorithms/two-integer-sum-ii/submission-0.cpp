class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left=0,right=numbers.size()-1;
        int size= numbers.size();
        while(numbers[left]+numbers[right]!=target){
            int sum = numbers[left]+numbers[right];
            if(sum>target)  right--;
            if(sum<target)  left++;
        }
        vector <int> final={left+1,right+1};
        
        return final;
    }
};
