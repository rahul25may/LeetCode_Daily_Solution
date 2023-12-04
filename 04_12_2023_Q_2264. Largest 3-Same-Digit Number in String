class Solution {
public:
    string largestGoodInteger(string num) {
        int n = num.length();
         if (n < 3) {
        // If the string has less than 3 characters, it's not possible to form the desired substring
        return "";
    }
        vector<int>temp(10,0);
        for (int i = 2; i < n; ++i) {
            int a = num[i] - '0';

            if (num[i] == num[i - 1] && num[i] == num[i-2]) {
                temp[a]++;
            }
        }
        vector<int>ans;
        for(int i=0;i<10;i++){
            if(temp[i]>=1){
                ans.push_back(i);
            }
                
        }
        string str ="";
        if(ans.empty()){
            return str;
        }
        sort(ans.begin(), ans.end());
        int m = ans.size();
        char f = '0' + ans[m-1];
        for(int i=0;i<3;i++){
            str+=f;
        }
        return str;
    }
};
