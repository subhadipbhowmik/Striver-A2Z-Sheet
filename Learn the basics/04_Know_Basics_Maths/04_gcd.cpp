int calcGCD(int n, int m)
{
    while (m != 0)
    {
        int temp = m;
        m = n % m;
        n = temp;
    }
    return n;

    // otherwise
    /*
     int gcd =1;
    // Write your code here.
    for(int i=1; i<=n&&i<=m;i++){
        if(n%i==0 && m%i==0){
            gcd = i;
        }
        */
}