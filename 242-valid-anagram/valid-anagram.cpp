class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()){
            return false;
        }
         
         vector<char> s1;
         for(int i =0; i<s.size(); i++){
            s1.push_back(s[i]);
         }

           vector<char> s2;
         for(int i =0; i<t.size(); i++){
            s2.push_back(t[i]);
         }

         sort(s1.begin(),s1.end());
         sort(s2.begin(),s2.end());
        bool flag = true;
         for(int i=0; i<s1.size(); i++){
            if(s1[i] != s2[i]){
                flag = false;
            }
         }

         if(flag == true){
            return true;
         }

         return false;
    }
};