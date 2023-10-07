 int print_divisors(int n) {
        // Code here.
        set<int> s;
     for(int i=1; i<= sqrt(n); i++){
         if(n%i==0){
             s.insert(i);
              if(n/i != i){
              s.emplace(n/i);
         }
         
         }
     }
    //  sort(v.begin(),v.end());
    int sum =0;
    for(auto it : s){
        // cout<<it<<" ";
        sum = sum+it;
        
    }
    
    return sum;
    }
    long long sumOfDivisors(int N)
    {
        // Write Your Code here
        int ans =0;
             while(N>=1){
                 ans = ans+print_divisors(N);
                 N--;
             }
            
            return ans;
    }
