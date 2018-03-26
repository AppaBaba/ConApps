#include<iostream>
using namespace std;
enum attr {rst, bld, dim, so, us, blnk};
enum fgc {fgblk=30,fgred=31, fggrn=32, fgylw=33, fgblu=34, fgmgt=35, fgcyn=36, fgwht=37};
class dsptxt
{
    private:
    int a,c,rw,cm; //four private data members
    public:
// A constructor with default values
    dsptxt(int attr=1, int color=31) { a=attr; c=color; }
// A function to make changes to data members
    void change(int attr, int color) {
	a=attr;
	c=color;
	cout<<"\033["<<a<<";"<<c<<"m"; }
    void clrscn() {cout<<"\033[2Jm";}
    void poscur(int row, int col) {
	rw=row;
	cm=col;
	cout<<"\033["<<rw<<";"<<cm<<"H"; }
// A function to output the object data
    void output() {
	cout<<"This is what it looks like";
	cout<<"\033[0m\n"; }
};
int main()
{
        dsptxt oop;
	oop.clrscn();
	oop.poscur(10,30);
        cout<<"----Colortxt C++ OOP APP---";
	oop.poscur(11,32);
	oop.change(bld,fgred);
        oop.output();
	oop.poscur(12,34);
        oop.change(bld,fggrn);
        oop.output();
	oop.poscur(13,36);
        oop.change(bld,fgylw);
        oop.output();
	oop.poscur(14,38);
        oop.change(bld,fgblu);
        oop.output();
	oop.poscur(15,40);
        oop.change(bld,fgmgt);
        oop.output();
        return 0;
}