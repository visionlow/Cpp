
#include<iostream>
using namespace std;
int main(){
  int s(int m);
  int s(int n);
  int s(int k);
  int m, n, k,  cmn;
  cout<<"ÇëÊäÈëm£º"<<endl;
  cin >>m;
  cout<<"ÇëÊäÈën£º"<<endl;
  cin >>n;
  k=m-n;
  cmn=s(m)/(s(k)*s(n));
  cout <<"cmn="<<cmn;
  return 0;
}
int s(int j){
  int sum=1;
  for(int i=1;i<=j;i++){
	  sum=sum*i;
	  
  }return sum;
}