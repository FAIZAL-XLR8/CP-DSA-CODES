int gcd (int mini, int maxi) {
    if (maxi%mini == 0) {
        return mini;
    }
    gcd (maxi%mini, mini);
}
int main () {
    int a , b;
    cin >> a >> b;
    int mini =min (a,b);
    int maxi = max(a,b);
    cout << gcd (mini,maxi);
   
}