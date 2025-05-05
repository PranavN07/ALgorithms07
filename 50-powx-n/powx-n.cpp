class Solution {
public:
   double pow(double x,long long N){
        // stopping conditoin
        if(N==0) return 1;

        double half = pow(x,N/2);
        if(N % 2==0){
            return half*half;
        }
        else{
           return half*half*x;
        }
          

   }
   double myPow(double x, int n) {
       long long N = n;
       if(N<0){
          x = 1/x;
          N = -N;
       }
       return pow(x,N);
  

    }
};


