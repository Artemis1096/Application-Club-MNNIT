string removeOuterParentheses(string s) {
        stack<char> x;
        string ans="";
        for(auto c:s){
            if(c=='('){
                if(x.size()>0){
                    ans+=c;
                }
                x.push(c);
            }
            else{
                if(x.size()>1){
                    ans+=c;
                }
                x.pop();
            }
        }
        return ans;
    }