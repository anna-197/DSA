class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	   string ans1;
   string ans2;
   for(int i=0; i<S.length(); i++){
       ans1=ans1+S[i];
   }
   for(int i=S.length()-1; i>=0; i--){
       ans2=ans2+S[i];
   }
   if(ans1==ans2)
   return 1;
   else
   return 0; // Your code goes here
	}

};