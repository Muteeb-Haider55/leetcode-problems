class Solution {
public:
    bool checkIfPangram(string sentence) {

        unordered_set<char> sen(sentence.begin(), sentence.end());
        for (char i = 'a'; i <= 'z'; i++) {
            if (sen.find(i) == sen.end())
                return false;
        }
        return true;
    }
};