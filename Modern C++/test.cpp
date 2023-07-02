
#include<bits/stdc++.h>
using namespace std;

class Shape{
    protected:
        int width;
        int length;

    public:
        virtual void getArea() = 0; // pure virtual function
        void setWidth(int w){
            width = w;
        }
        void setLength(int l){
            length = l;
        }
};

class Square: public Shape{
    public:
        void getArea(){
            cout<<"The area of the Square is  " << (width*length)<<endl;
        }
};

class Triangle: public Shape{
    public:
        void getArea(){
            cout<<"The area of the Triangle is " << ((width * length) / 2)<<endl;
        }
};

int main(){

    Square sq;
    sq.setLength(4);
    sq.setWidth(4);
    sq.getArea();

    Triangle t;
    t.setLength(10);
    t.setWidth(5);
    t.getArea();

    return 0;
