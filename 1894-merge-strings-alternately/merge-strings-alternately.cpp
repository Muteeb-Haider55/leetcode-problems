class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string word3;
        int first = 0;
        int second = 0;
        int n1 = word1.size() ;
        int n2 = word2.size() ;
        while(first != n1 || second != n2){
            if(first < n1){
                word3.push_back(word1[first++]);
            }
            if(second < n2){
                word3.push_back(word2[second++]);
            }
        }
        return word3;
    }
};