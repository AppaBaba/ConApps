#include<iostream>
using namespace std;
enum attr {rst, bld, dim, so, us, blnk};
enum fgc {fgblk=30,fgred=31, fggrn=32, fgylw=33, fgblu=34, fgmgt=35, fgcyn=36, fgwht=37};
class pram
{
    private:
    int a,c; //two private data members
    public:
// A constructor with default values
    pram(int attr=1, int color=31) { a=attr; c=color; }
// A function to make changes to data members
    void change(int attr, int color) { a=attr; c=color; }
// A function to output the object data
    void output()
         {
             cout<<"\033["<<a<<";"<<c<<"m";
             cout<<"This is what it looks like";
             cout<<"\033[0m\n";
         }
};
int main()
{
        pram oop;
        cout<<"----PRAM C++ OOP APP---"<<endl;
        oop.output();
        oop.change(bld,fggrn);
        oop.output();
        oop.change(bld,fgylw);
        oop.output();
        oop.change(bld,fgblu);
        oop.output();
        oop.change(bld,fgmgt);
        oop.output();
        return 0;
}