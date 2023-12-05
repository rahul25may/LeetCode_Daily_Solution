class Solution {
public:
    int numberOfMatches(int n) {
        int ans = 0;
        while(n>1){
            int temp = 0;
            if(n%2==0){
                temp = n/2;
                n = n/2 ;
            }
            else{
                temp = n/2;
                n = n- temp;
            }
            ans = ans + temp;
        }
        return ans;
    }
};
