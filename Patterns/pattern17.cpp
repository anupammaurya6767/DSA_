void alphaHill(int n) {
    for(int i=0;i<n;i++){

        

        //Space

        for(int j=0;j<n-i-1;j++){

            cout<<"  ";

        }      

        //Alphabet

        char ch= 'A';

        int breakpoint = (2*i+1)/2;

        for(int j=0; j<2*i+1;j++){

            cout<<ch<<" ";

            if(j<breakpoint) ch++;

            else ch--;             

        }

        //Space

        for(int j=0;j<n-i-1;j++){

            cout<<"  ";

        }

        cout<<endl;

    }


}
