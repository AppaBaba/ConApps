#include<iostream>
using namespace std;
// ok, a very simple class
class pram
{
        private:
        int a,c; // two private data members
        public:
// A constructor with default values
        pram()
        {
            a=1;
            c=31;
        }
// A function to input change to data members
        void input()
        {
             cout<<"input attr: ";
             cin>>a;
             cout<<"input color: ";
             cin>>c;
         }
// A function to output the object data
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
