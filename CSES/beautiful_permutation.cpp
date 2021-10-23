#include<bits/stdc++.h>
using namespace std;

int main(){

  int n;
  cin>>n;
  string even="";
  string odd="";

  if(n==1){
      cout<<1;
      return 0;
  }
  if(n<=3){
      cout<<"NO SOLUTION";
      return 0;
  }

  for(int i=1;i<=n;i++){
      if(i%2==0){
          even+=to_string(i)+" ";
      }
      else{
          odd+=to_string(i)+" ";
      }
  }
if(n==4){
    cout<<even<<odd;
}
else{
    cout<<odd<<even;
}



}