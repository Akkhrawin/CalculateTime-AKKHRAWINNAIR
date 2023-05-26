#include <iostream>
using namespace std;
#include <iomanip>

void getTime (int &h,int &m){
 cout<<endl<<" input hour & min:";
cin>>setw(h)>>setw(m);
}
int subtract(int h1,int m1,int h2,int m2){
  int hour,minute;
  hour = h2-h1; 
  minute = m2-m1;
  if (hour>=0&&minute>=0){
    return hour;
  }
  else if (hour>=0&&minute<0) {
    return hour-1;
  }
  else if (hour<0&&minute>=0) {
    return hour+24;
  }
  else if (hour<0&&minute<0) {
    return hour+24-1;
  }
}

int subtract(int k1,int k2){
  int min;
  min= k2-k1;
  if(min<0){
    return min+60;
  }
  else{
    return min;
  }
}