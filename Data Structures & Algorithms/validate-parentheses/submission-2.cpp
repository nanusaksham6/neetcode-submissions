class Solution {
public:
    bool isValid(string s) {
stack<char>st;
     for(int i=0;i<s.size();i++){
if(s[i]=='[' || s[i]=='{' || s[i]=='('){
    st.push(s[i]);
}
else{
    //khuch match krne ko hai nhi stack empty pda hua hai 
if(st.empty()) return false;
// ch jo hai vo top of stack ko point out krega fir hum usko pop krke closing bracket se match krenge agr kr gye to true vrna false
char ch=st.top();
st.pop();
if((s[i]==')'&& ch!='(')||(s[i]==']'&& ch!='[')||(s[i]=='}'&& ch!='{')){
    return false;
}
     } 
     }
     return st.empty();    
    }
};
