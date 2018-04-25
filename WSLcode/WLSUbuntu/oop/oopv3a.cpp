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
        void change(int attr, int color)
        {
             a=attr;
             c=color;
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
        pram oop;
        cout<<"----PRAM C++ OOP APP---"<<endl;
        oop.output();
        oop.change(1,32);
        oop.output();
        return 0;
}