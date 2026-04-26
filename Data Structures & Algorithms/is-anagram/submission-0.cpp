class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<char> sList, tList;

        /* 배열에 글자를 하나씩 저장 */
        for(int i=0; i<s.length(); i++)
            sList.push_back(s[i]);
        for(int i=0; i<t.length(); i++)
            tList.push_back(t[i]);
        
        /* 배열을 오름차순으로 정렬 */
        sort(sList.begin(), sList.end());
        sort(tList.begin(), tList.end());

        /* 팰린드롬이라면 두 배열이 똑같음 */
        if(sList == tList)
            return true;
        else
            return false;
    }
};
