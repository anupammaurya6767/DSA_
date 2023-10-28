bool palindrome(int n)

{

    // Write your code here

    int temp = n;

    int ans = 0;

    while(temp > 0){

        int r = temp % 10;

        ans = ans *10 + r;

        temp = temp / 10;

 

    }

    if(ans == n)return 1;

    return 0;

}
