#include<iostream>
using namespace std;

enum attr {rst, bld, dim, so, us, blnk};

enum fg {blk, red, grn, yllw, blue, mgnt, cyn, wht};

int main()
{
 cout<<"\033["<<bld<<";"<< red + 30 <<"mHi there\033[0m"<<endl;
 cout<<"\033["<<bld<<";"<< grn + 30 <<"mHi there\033[0m"<<endl;

 return 0;
}
