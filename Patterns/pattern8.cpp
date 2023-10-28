void nStarTriangle(int n) {
    for(int i=n;i>0;i--)
    {
        for(int j=n;j>i;j--)
            cout<<" ";
        for(int k=1;k<2*i;k++)
            cout<<"*";
        cout<<endl;
    }
}
