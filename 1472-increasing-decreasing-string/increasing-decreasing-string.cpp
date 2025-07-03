class Solution {
public:
    string sortString(string s) {
        string result;
        int checkloop = 1;
        vector<int> countchar(26, 0);
        for (int i = 0; i < s.size(); i++) {
            countchar[s[i] - 'a']++;
        }
        while (result.size() != s.size()) {
            if (checkloop % 2 != 0) {
                for (int i = 0; i < 26; i++) {
                    if(countchar[i]){
                        result.push_back(i+'a');
                    countchar[i]--;
                    }
                    
                }
                checkloop++;
            }
            else{
                   for (int i = 25; i >= 0; i--) {
                    if(countchar[i]){
                    result.push_back(i+'a');
                    countchar[i]--;
                    }
                   
                }
                 checkloop++;
            }
        }
        return result;
    }
};