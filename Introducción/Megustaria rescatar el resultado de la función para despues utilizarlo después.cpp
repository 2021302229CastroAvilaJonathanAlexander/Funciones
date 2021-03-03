#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
cout<<"\n\tIntroduzca el valor del primer operando:\n\t"<< endl;
cin>>a;
cout<<"\n\tIntroduzca el valor del segundo operando:\n\t"<< endl;
cin>>b;
cout<<"\n\tIntroduzca el valor del segundo operando:\n\t"<< endl;
cin>>c;
if(a>b&&a>c){
    cout<<"\n\tEl mayor es:\n\t"<<a<<endl;
}
else if(b>a&&b>c){
    cout<<"\n\tEl mayor es\n\t"<<b<<endl;
}
else{
    cout<<"\n\tEl mayor es\n\t"<<c<<endl;
}
return 0;
}


