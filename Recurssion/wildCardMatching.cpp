#include<iostream>
#include<vector>

using namespace std;
bool isMatchFinder(string s,int si, string p,int pi){
    if(si==s.size() &&pi ==p.size()) return true;

    if(si==s.size() && pi<p.size()){
        while(pi<p.size()){
            if(p[pi]!='*') return false;
            pi++;
        }
        return true;
    }

    //  single match
    if(s[si]==p[pi]||'?'==p[pi]){
    return isMatchFinder(s,si +1,p,pi+1);
    }
    if(p[pi]=='*'){
        // treat * is null or empty

        bool caseA = isMatchFinder(s ,si,p,pi+1);

    // let '*' conusume one char
    bool caseB = isMatchFinder(s ,si+1,p,pi);

    return caseA||caseB;
    }
    return false;
}

int main(){
    string s = "aa";
    string p ="*";

    int si = 0;
    int pi = 0;
    cout<< isMatchFinder(s ,si,p,pi);

    
    return 0;
}