class Solution {
public:
    bool isIsomorphic(string s, string t) {
        // map to map char of s to t
      unordered_map<char,char> Map;
      
      // set to keep mapped count, same char can't be mapped to 2 different char
      unordered_set<char> mapped;
      
      if(s.size() != t.size()) return false;
      
      for(int i=0; i<s.size(); ++i){
        int cs = s[i], ct = t[i];
        
        // if we have mapped s[i] to t[i]
        // if they are same like previously mapped then continue, if different then return false
        /*
        
          like,      aab    deb
          first,     a -> d
          but now,   a -> e
          this is wrong
        
        */
        if(Map.count(cs)) {
          if(Map[cs] == ct) continue;
          else return false;
        }
        
        // if we can't find map of s[i], but we once already mapped t[i] with 
        // something else, then return false
        // else we never mapped any of both charaters
        
        /*
        
          like,      aeb    ddb
          first,     a -> d
          but now,   e -> nothing, but mapped has d already present b/c a->d
          hence it will also be wrnong to map same char to 2 diff chars
    
        */
        
        else {
          if(mapped.count(ct)) return false;
          Map[cs] = ct;
          mapped.insert(ct);
        }
      }
      
      // we finished traversing in both string so everything matched
      return true;
    }
};