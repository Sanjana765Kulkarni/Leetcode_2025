// Last updated: 01/08/2026, 23:25:13
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
    vector<int> findSubstring(string s, vector<string>& words) {
        if (s.empty() || words.empty()) return {};
        
        int n = s.length();
        int word_count = words.size();
        int word_len = words[0].length();
        int window_size = word_count * word_len;
        
        unordered_map<string, int> target_counts;
        for (const string& w : words) target_counts[w]++;
        
        vector<int> res;
        
        // We only need to check offsets from 0 to word_len - 1
        for (int i = 0; i < word_len; ++i) {
            unordered_map<string, int> current_window;
            int left = i;
            int count = 0; // Number of valid words in current window
            
            for (int right = i; right <= n - word_len; right += word_len) {
                string word = s.substr(right, word_len);
                
                if (target_counts.count(word)) {
                    current_window[word]++;
                    count++;
                    
                    // If we have too many of one word, shrink from the left
                    while (current_window[word] > target_counts[word]) {
                        string left_word = s.substr(left, word_len);
                        current_window[left_word]--;
                        count--;
                        left += word_len;
                    }
                    
                    // If the number of words matches, we found a valid index
                    if (count == word_count) {
                        res.push_back(left);
                    }
                } else {
                    // Reset the window if we hit an invalid word
                    current_window.clear();
                    count = 0;
                    left = right + word_len;
                }
            }
        }
        
        return res;
    }
};