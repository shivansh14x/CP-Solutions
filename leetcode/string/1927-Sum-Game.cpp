class Solution {
public:
    bool sumGame(string num) {
        int n = num.size();
        long long fh = 0 , sh = 0;
        vector<int> first , second;
        for(int i=0; i<n/2; i++){
            if(num[i] != '?'){
              fh += (num[i] - '0');
            }
            else{
              first.push_back(i);
            }
        }
        for(int i=n/2; i<n; i++){
            if(num[i] != '?'){
              sh += (num[i] - '0');
            }
            else{
              second.push_back(i);
            }
        }

        int turn = 0;
        while(first.size() > 0 || second.size() > 0){
            if(turn % 2 == 0){
               if(fh > sh){
                 if(first.size() > 0){
                   num[first[0]] = 9 + '0';
                   fh += 9;
                   first.pop_back();
                 }
                 else if(second.size() > 0){
                    num[second[0]] = 0 + '0';
                    second.pop_back();
                 }
               }
              else if(fh == sh){
                 if(first.size() > 0){
                   num[first[0]] = 9 + '0';
                   fh += 9;
                   first.pop_back();
                 }
                 else if(second.size() > 0){
                    num[second[0]] = 9 + '0';
                    sh += 9;
                    second.pop_back();
                 }
               }
               else{
                  if(second.size() > 0){
                   num[second[0]] = 9 + '0';
                   sh += 9;
                   second.pop_back();
                  }
                  else if(first.size() > 0){
                    num[first[0]] = 0 + '0';
                    first.pop_back();
                 }
               }
             turn++;
            }


            else{
               if(fh < sh){
                 if(first.size() > 0){
                   num[first[0]] = 9 + '0';
                   fh += 9;
                   first.pop_back();
                 }
                 else if(second.size() > 0){
                    num[second[0]] = 0 + '0';
                    second.pop_back();
                 }
               }
               else if(fh == sh){
                 if(first.size() > 0){
                   num[first[0]] = 0 + '0';
                   first.pop_back();
                 }
                 else if(second.size() > 0){
                    num[second[0]] = 0 + '0';
                    second.pop_back();
                 }
               }
               else{
                 if(second.size() > 0){
                   num[second[0]] = 9 + '0';
                   sh += 9;
                   second.pop_back();
                  }
                 else if(first.size() > 0){
                    num[first[0]] = 0 + '0';
                    first.pop_back();
                 }
               }
               turn++;
            }
        }
        return fh != sh;
    }
};