class Solution {
public:
    vector<int> prisonAfterNDays(vector<int>& cells, int n) {
        ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
        if(n==0) return cells;
        n=n%14==0?14:n%14;
        vector<int> temp(8,0);
        while(n--){
            for(int i=1;i<cells.size()-1;i++){
                temp[i]=cells[i-1]==cells[i+1];
            }
            cells=temp;
        }
        return cells;
    }
};
