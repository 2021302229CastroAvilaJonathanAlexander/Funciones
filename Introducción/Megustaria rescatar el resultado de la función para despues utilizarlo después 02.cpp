#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    int max1;
cout<<"\n\tIntroduzca el valor del primer operando:\n\t"<< endl;
cin>>a;
cout<<"\n\tIntroduzca el valor del segundo operando:\n\t"<< endl;
cin>>b;
cout<<"\n\tIntroduzca el valor del segundo operando:\n\t"<< endl;
cin>>c;
max1 =a;
if(b>max1){
    max1=b;
}
if(c>max1){
    max1=c;
    cout<<"\n\tEl mayor es:\n\t"<<max1<<endl;
}
}
