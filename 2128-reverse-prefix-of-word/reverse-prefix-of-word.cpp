class Solution {
public:
    string reversePrefix(string word, char ch) {
    int left =0;
    int right = 0;

        for(int i =0;i<word.size();i++){
            if(word[i]==ch){
                right = i;
                break;
            }
        }
        while(left<right){
            swap(word[left], word[right]);
            left++;
            right--;
        }
        return word;
        /*string res;
        int right = -1;
        for (int i = 0; i < word.size(); i++) {
            if (word[i] == ch) {
                right = i;
                break;
            }
        }
        if (right == -1)
            return word;
        int k = right + 1;
        for (int j = right; j >= 0; j--) {
            res.push_back(word[j]);
        }
        for (int i = k; i < word.size(); i++) {
            res.push_back(word[i]);
        }
        if (res.empty())
            return word;
        return res;
        */
    }
};