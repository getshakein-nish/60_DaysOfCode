unordered_map<char,int> sym={{'(',-1},{'{',-2},{'[',-3},{')',1},{'}',2},{']',3}};
class Solution {
public:
    bool isValid(string s) { 
        stack<char> a;
        for(auto brac: s){
            if(sym[brac]<0){a.push(brac);}
            else{
                if(a.empty()) return false;
                char top= a.top();
                a.pop();
                if(sym[top]+sym[brac]!=0){ return false;  }
            }
        }
    if(a.empty()) return true;
    return false;
    }    

};
