class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> sMap, tMap; // <알파벳, 들어간 횟수>

        /* 해시맵에 글자를 하나씩 저장 */
        for(int i=0; i<s.length(); i++)
            sMap[s[i]]++;
        for(int i=0; i<t.length(); i++)
            tMap[t[i]]++;
        
        return sMap == tMap;
    }
};
