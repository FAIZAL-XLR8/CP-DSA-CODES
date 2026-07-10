int pow2(int base, int power){
    if(power==0) return 1;  
    if(power==1) return base;
    int ans=pow2(base,power/2);;
    if(power%2!=0)
   return ans*ans*base;
   else
    return ans*ans;
}