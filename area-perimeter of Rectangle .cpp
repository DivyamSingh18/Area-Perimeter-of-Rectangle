#include<iostream>
using namespace std;

class rectangle
{
private:
    int length, breadth;
public:
    void setDimensions(int l, int b)
                {
                    length= l;
                    breadth= b;
                }
    void showDimensions()
                {
                cout<< "Length and Breadth of rectangle are " << length <<" and " << breadth;
                }
    int area()
    {
       return(length*breadth);
    }
    int peri()
    {
        return(2*(length+breadth));
    }
};


int main()
{
    rectangle r1,r2;
    r1.setDimensions(10,5);
    r2.setDimensions(20,10);

    cout<<"For 1st rectangle \n";
    r1.showDimensions();
    cout << "\nArea of 1st rectangle is "<< r1.area() ;
    cout << "\nPerimeter of 1st rectangle is "<< r1.peri() <<"\n\n";


    cout<<"For 2nd Rectangle \n";
    r2.showDimensions();
    cout<< "\nArea of 2nd rectangle is " << r2.area();
    cout<< "\nPerimeter od 2nd rectangle is " << r2.peri();

return 0;
}

