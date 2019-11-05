#include<iostream>
#include<math.h>

using namespace std;


int gcd(int x, int y) {
   int t;
   while(1) {
      t= x%y;
      if(t==0)
      return y;
      x = y;
      y= t;
   }
}
int main() {


   int p = 11;
   int q = 3;
   int n=p*q;
   int rsa;
   int phai= (p-1)*(q-1);



   int e=7;

while(e<phai) {
      rsa = gcd(e,phai);
      if(rsa==1)
         break;
      else
         e++;
   }



   double d1=1/e;

   int d=fmod(d1,phai);

   int message = 9;

   int c = pow(message,e);

   int m = pow(c,d);

   c=fmod(c,n);

   m=fmod(m,n);

   cout<<"Original Message = "<<message;

   cout<<"\n"<<"p = "<<p;

   cout<<"\n"<<"q = "<<q;

   cout<<"\n"<<"n = pq = "<<n;

   cout<<"\n"<<"phai = "<<phai;

   cout<<"\n"<<"e = "<<e;

   cout<<"\n"<<"d = "<<d;

   cout<<"\n"<<"Encrypted message = "<<c;

   cout<<"\n"<<"Decrypted message = "<<m;

   return 0;
}
