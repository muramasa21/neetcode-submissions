class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector <pair<int,int>> a;
        vector <int> final(k);
        unordered_map <int,int> mp;
        for(auto &x : nums){
            mp[x]++;
        }

        for(auto &x : mp){
            a.push_back({x.second,x.first});
        }
        sort(a.rbegin(),a.rend());

        for(int i=0;i<k;i++){
            final[i]=a[i].second;
        }

        return final;
    }
};
