class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
    
        int n = s.size();
        vector<int> one;

        for(int i=0; i<n; i++){
            if(s[i] == '1'){
                one.push_back(i);
            }
        }
        string res = s;

        if(one.size() >= k){
          int sz = (int)one.size()-k;
          for(int i=0; i<=sz; i++){
              int r = one[i+k-1];
              int l = one[i];
              string x = s.substr(l , r-l+1);
              if(x.length() < res.length() || (x.length() == res.length() && (x < res))){
                 res = x;
              }
           }
            return res;
         }
        return "";
    }
};