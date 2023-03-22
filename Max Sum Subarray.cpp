long maximumSumSubarray(int K, vector<int> &Arr , int N){
        int i=0;
        int j=0;
        long max_sum=0, curr_sum=0;
        
            while(j<N){
                curr_sum=curr_sum+Arr[j];
                // cout<<"curr_sum"<<curr_sum<<endl;
                if((j-i+1)!=K){
                    j++;
                }
                else if((j-i+1)==K){
                    max_sum=max(curr_sum,max_sum);
                    curr_sum=curr_sum-Arr[i];
                    j++;i++;
                }
            }
        
        return max_sum;
    }