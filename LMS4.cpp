include <iostream>

using namespace std;

class calc{   // compile time polymorphism // early binding // function overloading

//Function name must be same but type or number of parameter should be diffrent
public:
void Area(float r){
    
    cout<<"Area of circle is: "<<3.14*r*r;
}

void Area(int s){  //overload
     cout<<"\n Area of square is: "<<s*s;
}
void Area(int l, int b){   // overload
    cout<<"\n Area of rectangle is: "<<l*b;
}

float Area(float l, float b, float h){ //overload
    
    return l*b*h;
}
void Area(float b, float h){ //overload
    cout<<"\n Area of Triangle is: "<<0.5*b*h;
    
}
};

int main()
{  int side;
float result;
    cout<<"Enter side of square";
    cin>>side;
    calc c;
    c.Area(5.0f);
    c.Area(side);
    c.Area(5,6);
   c.Area(2.5f,6.8f);
    result =  c.Area(2.0f,5.5f,8.6f);
    cout<<"\n Volume of cuboid id:"<<result;
    
    return 0;
}
