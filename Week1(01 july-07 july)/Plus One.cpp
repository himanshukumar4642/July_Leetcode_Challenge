class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        ios_base::sync_with_stdio(0);cin.tie(0);
        int n=digits.size();
        int i=n-1;
       for(int i = n-1;i>=0;--i){
            if (digits[i]+1 >9){
                digits[i] = digits[i] + 1 - 10;
                if(i==0) digits.insert(digits.begin(),1);
            }
            else{
                digits[i] = digits[i] + 1;
                break;
            }
        }
        return digits;
    }
};
