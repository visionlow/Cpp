#include<iostream>
using namespace std;
int main(){
  int  y;
  float x,xy;
  float m(float X,int Y);
  cout <<"ÇëÊäÈëx£»"<<endl;
  cin >>x;
  cout <<"ÇëÊäÈëy£»"<<endl;
  cin >>y;
  cout <<"xy="<<m(x,y)<<endl;
  return 0;
}
float m(float X, int Y){
   float t;
   if(Y==1) t=X;
   else t=X*m(X,Y-1);
   return t;
}