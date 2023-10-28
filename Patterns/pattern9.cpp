void nStarDiamond(int n) {

   int k=n,s=n-1;

   for(int i=0;i<n;i++){

       for(int j=0;j<k;j++){

         if(j>=s){

           cout<<"*";

         }

         else{

           cout<<" ";

         }

       }

       s--;

       k++;

       cout<<endl;

   }

    int l=n,s1=0;

    for(int i=n-1;i>=0;i--){

        for(int j=0;j<i+l;j++){

           if(s1>j){

               cout<<" ";

           }

           else{

               cout<<"*";

           }

        }

        s1++;

        cout<<endl;

    }

}
