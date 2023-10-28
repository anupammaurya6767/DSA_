bool checkArmstrong(int n){
	int mmm=0;

string s = to_string(n);

for(int i = 0 ; i< s.size();i++){

mmm+=pow(s[i]-'0',s.size());

}

if(mmm==n){

return true;

}

return false;
}
