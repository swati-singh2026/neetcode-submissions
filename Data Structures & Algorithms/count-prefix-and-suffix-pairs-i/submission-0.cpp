class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
        int count = 0;
        int n = words.size();

        for (int j = 0; j < n; j++) {
            for (int i = 0; i < j; i++) {

                if (words[i].size() <= words[j].size()) {

                    bool prefix =
                        words[j].substr(0, words[i].size()) == words[i];

                    bool suffix =
                        words[j].substr(
                            words[j].size() - words[i].size()
                        ) == words[i];

                    if (prefix && suffix) {
                        count++;
                    }
                }
            }
        }

        return count;
    }
};