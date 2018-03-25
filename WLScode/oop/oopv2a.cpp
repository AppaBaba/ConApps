#include<iostream>
using namespace std;
class pram
{
        private:
        int a,c;
        public:
        pram(int attr=1, int color=31)
        {
            a=attr;
            c=color;
        }
        void input()
        {
             cout<<"input attr: ";
             cin>>a;
             cout<<"input color: ";
             cin>>c;
         }
         void output()
         {
             cout<<"\033["<<a<<";"<<c<<"m";
             cout<<"This is what it looks like";
             cout<<"\033[0m\n";
         }
};
int main()
{
        pram oop1;
        pram oop2(1,32);
        pram oop3(1,33);
        pram oop4(2);
        pram oop5(2,32);
        pram oop6(2,33);
        pram oop7(4);
        pram oop8(5,34);
        pram oop9(5,35);
        cout<<"----PRAM C++ OOP APP---"<<endl;
        oop1.output();
        oop2.output();
        oop3.output();
        oop4.output();
        oop5.output();
        oop6.output();
        oop7.output();
        oop8.output();
        oop9.output();
        return 0;
}