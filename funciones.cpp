#include <iostream>
using namespace std;

 int is(int x , int y)
 {
     return x*y;

 }
 void camb(int &x)
 {
     x=7;
    cout<<x;
 }


 int main()
 {
     int x=2;
     int y=3;
     if( is(x!=y,x==2))
     {
         camb(x);
         cout<<x;
     }
     return 0;
 }
