int calcGCD(int n, int m){

    if(n==0)

        return m;

    if(m == 0)

        return n;

    int n1 = min(n,m);

    int n2 = max(n,m);

    return calcGCD(n2%n1,n1);

}
