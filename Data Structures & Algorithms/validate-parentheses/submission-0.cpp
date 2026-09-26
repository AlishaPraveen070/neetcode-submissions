class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char>st;
        unordered_map<char,char>mpp;
        mpp['('] = ')';
        mpp['{'] = '}';
        mpp['['] = ']';

        for(char ch : s){
            if(ch == '(' || ch == '{' || ch == '['){
                st.push(ch);
            }
            else if(!st.empty()){
                char chr = st.top();
                char c = mpp[chr];
                if(c == ch){
                    st.pop();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        return st.empty();        
    }
};