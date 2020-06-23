class Solution {
public:
    string countAndSay(int n) {
        string s1 = "1", s2 = "";
        
        for (; n > 1; n--) {
            int size = s1.size();
            for (int i = 0; i < size; ++i) {
                char c = s1[i];
                int cnt = 1;
                
                while (s1[i] == s1[i + 1])
                    ++cnt, ++i;
                s2 += to_string(cnt) + c;
            }
            s1 = s2;
            s2.clear();
        }
        return s1;
    }
};
