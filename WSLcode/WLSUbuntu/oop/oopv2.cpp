#include<iostream>
using namespace std;
class pram
{
        private:
        int a,c;
        public:
        pram()
        {
            a=1;
            c=31;
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
        pram oop;
        cout<<"----PRAM C++ OOP APP---"<<endl;
        oop.output();
        return 0;
}