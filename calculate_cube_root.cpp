//program to calculate cube root of any number
#include<iostream>
using namespace std;
int main(){
    float k,x=1,y;
    cout<<"input the no whose cube root is to be calculated\t";
    cin>>k;
    y=x*x*x-k;
    while(y>0.000001||y<-0.000001)
    {
        y=x*x*x-k;
      x=2*x/3+k/(3*x*x);
    }
    cout<<"cube root is\t"<<x;
    return 0;

}