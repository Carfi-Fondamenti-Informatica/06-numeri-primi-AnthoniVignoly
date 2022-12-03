#include <iostream>

using namespace std;

int primo(int,int);
int main(){
  int n,i=2;
  cin>>n;
  if(primo(n,i)) cout<<"numero primo";
  else cout<<"numero non primo";
  return 0;
}
