class Solution {
public:
bool isGoodString(string ch, unordered_map<char, int> mp){
    for(int i = 0; i<ch.size();i++){
            
            if(!mp.count(ch[i])||mp[ch[i]]==0){
                 
             return false;
            }
            mp[ch[i]]--;
           
    }
    return true;
}
    int countCharacters(vector<string>& words, string chars) {
        int result = 0;
        unordered_map <char, int> mp;
        for (char ch : chars){
             mp[ch]++;
        }
        
        for(int i = 0 ;i<words.size(); i++){
          if(isGoodString(words[i],mp)){
          result+=(words[i].size());
          }
        }
        return result;
    }
};