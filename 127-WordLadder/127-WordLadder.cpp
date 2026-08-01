// Last updated: 01/08/2026, 23:23:34
class Solution {
public:
    
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {

        unordered_set <string> s (wordList.begin(), wordList.end());
        if(!s.contains(endWord)) return 0;
        queue <pair<string,int>> q;
        q.push({beginWord,1});
        cout << beginWord<< ' '<< 1<<endl;
        

        while(!q.empty()){

            string st = q.front().first;
            int r = q.front().second;
            if( st == endWord) return q.front().second;
            

        for( int i = 0; i< beginWord.length(); i++)
            {   
                
                
                for( char ch = 'a'; ch <='z';ch++)
                {
                    
                    st[i] = ch;

                    if( s.contains(st))
                    {
                        q.push({st,r+1});
                        cout << st <<' '<< r <<endl;
                        s.erase(st);
                    }
                }
                st = q.front().first;
                
            }
             q.pop();
        }  

        return 0;      
        
        
    }
};