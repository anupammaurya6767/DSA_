int countDigits(int n){

    // Write your code here.    

    int temp = n;

    int count = 0;

    while(temp > 0){

        int r = temp % 10;

        temp = temp / 10;

        if(r == 0)continue;

        if(r > 0 && n % r == 0){

            count++;    

        }

 

        

    }

    return count;

}
