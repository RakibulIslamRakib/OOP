//its a generic class. we can use a single class for differents data type

#include<bits/stdc++.h>
using namespace std;

template<class T>
class Rectangle{
private:
    T lenth,breath;

public:
    Rectangle(){
    lenth=breath=1;
    }

    Rectangle(T l,T b);

    T getlenth(){
    return lenth;
    }

    void setlenth(T l){
    lenth=l;
    }
    T area();

    T perimeter();

};

template<class T>
Rectangle<T>::Rectangle(T l,T b){
this->lenth=l;this->breath=b;
}

template<class T>
T Rectangle<T>:: area(){
    return lenth*breath;
}

template<class T>
T Rectangle<T>::perimeter(){
    return 2*(lenth+breath);
}

int main(){
Rectangle<int> R(10,23);
cout<<"Area : "<<R.area()<<" Perimeter : "<<R.perimeter()<<endl;
R.setlenth(14);
cout<<" Newlenth : "<<R.getlenth()<<endl;
cout<<"Area : "<<R.area()<<" Perimeter : "<<R.perimeter()<<endl;

Rectangle<float> R2(10.5,23.6);
cout<<"Area : "<<R2.area()<<" Perimeter : "<<R2.perimeter()<<endl;
R2.setlenth(14.5);
cout<<" Newlenth : "<<R2.getlenth()<<endl;
cout<<"Area : "<<R2.area()<<" Perimeter : "<<R2.perimeter()<<endl;
}

