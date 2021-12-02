class Solution {
  public:
    string delAlternate(string S) {
        string ans;
        for(int i=0; i<S.length(); i++){
            if(i%2==0){
                ans=ans+S[i];
            }
        }// 
        return ans;
    }
};