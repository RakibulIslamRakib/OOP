#include<bits/stdc++.h>
using namespace std;

class Rectangle{
private:
    int lenth,breath;

public:
    //default constructor
    Rectangle(){
    lenth=breath=1;
    }
    
    //parameterize constructor declaration.It will implement outside of the class
    Rectangle(int l,int b);//constructor overloaded

    int getlenth(){
    return lenth;
    }

    void setlenth(int l){
    lenth=l;
    }
    
    //Declared here. But implement outside of the class
    int area();

    
    //Declared here. But implement outside of the class
    int perimeter();

};

Rectangle::Rectangle(int l,int b){
lenth=l;breath=b;
}

int Rectangle:: area(){
    return lenth*breath;
}

int Rectangle::perimeter(){
    return 2*(lenth+breath);
}

int main(){
Rectangle R(10,23);
cout<<"Area : "<<R.area()<<" Perimeter : "<<R.perimeter()<<endl;
R.setlenth(14);
cout<<" Newlenth : "<<R.getlenth()<<endl;
cout<<"Area : "<<R.area()<<" Perimeter : "<<R.perimeter()<<endl;
}

