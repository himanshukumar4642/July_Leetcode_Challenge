class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> minh;
        unordered_map<int,int> um;
        for(int x:nums)
            um[x]++;
    for(auto i=um.begin();i!=um.end();i++){
        minh.push({i->second,i->first});
        if(minh.size()>k)
            minh.pop();
    }
    vector<int> ans;
    while(minh.size()>0){
        ans.push_back(minh.top().second);
        minh.pop();
    }
    return ans;
}
};
