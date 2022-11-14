#include<iostream>
#include<conio.h>
using namespace std;
class complex 
{private:
    int real, imag; 
public:
    complex (int r=0,int i=0){
        real=r;
        imag=i;
    }
    complex operator +(complex const &obj)
    {
        complex res;
        res.real=real+obj.real;
        res.imag=imag+obj.imag;
        return res;
    }
    void print() { 
        cout << real << " + i" << imag << '\n'; 
    }
    void print_hello() {
        cout<<"hello \n";
    }
};
 
int main()
{
    complex c1(20, 15), c2(12, 14);
    complex c3 = c1 + c2;
    c3.print();
    c3.print_hello();
}