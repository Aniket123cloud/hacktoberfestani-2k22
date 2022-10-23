#include <iostream>
using namespace std;
class Rectangle
{
    int length, breadth;
public:
    Rectangle():length(0),breadth(0){}
    void set(int length,int breadth)
    {
        this->length=length;
        this->breadth=breadth;
    }
    int getl()
    {
        return length;
    }
    int getb()
    {
        return breadth;
    }
    int area();
    int Perimeter();
};
int Rectangle:: area()
{
        return length * breadth;
}
int Rectangle::Perimeter()
{
    return 2 * (length + breadth);
}
int main()
{
    Rectangle r;
int l,b;
    Rectangle *p = new Rectangle();
    // r.length = 10;
    cout<<"enter length and breadth for rectangle"<<endl;
    cin>>l>>b;
    p->set(l,b);
    cout << p->area()<<endl;
    cout << p->Perimeter();
    return 0;
}
