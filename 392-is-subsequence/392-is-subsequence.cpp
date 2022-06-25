class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l1= s.length();
        int l2= t.length();
        
        
        if(l1==0){
            return true;
        }
        if(l1>l2){
            return false;
        }
        
        int count = 0;
        for(int i= 0 ;i < l2; i++){
            if( count <= l1){
                if(s[count]==t[i]){
                    count++;
                }
            }
        }
        if( count == l1){
            return true;
        }else{
            return false;
        }
    }
};