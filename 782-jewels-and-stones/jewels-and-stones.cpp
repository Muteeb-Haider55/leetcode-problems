class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        //Optimized Approach
        unordered_map<char, int> jewelsMap;
        for (char jewel : jewels) {
            jewelsMap[jewel]++;
        }
        for (int i = 0; i < stones.size(); i++) {
            if (jewelsMap.find(stones[i]) != jewelsMap.end())
                count++;
        }

/* Brute force Approach
         for(int i=0; i<jewels.size(); i++){
            for(int j=0;j<stones.size(); j++){
                if(jewels[i]==stones[j])
                count++;
            }
         }
*/

        return count;
    }
};