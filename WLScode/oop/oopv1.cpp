#include<iostream>
using namespace std;
class pram
{
        private:
        int a,c;
        public:
        pram()
        {
            a=0;
            c=0;
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
             cout<<"attr is: "<<a<<endl;
             cout<<"color is: "<<c;
         }
};
int main()
{
        pram oop;
        cout<<"----PRAM C++ OOP APP---"<<endl;
        oop.input();
        cout<<"attr and color are: "<<endl;
        oop.output();
        return 0;
}
