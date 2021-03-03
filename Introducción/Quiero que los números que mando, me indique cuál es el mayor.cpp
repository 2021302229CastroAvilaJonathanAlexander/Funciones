#include<iostream>
using namespace std;

int main()
{
    int a,b;
cout<<"\n\tIntroduzca el valor del primer operando:\n\t"<< endl;
cin>>a;
cout<<"\n\tIntroduzca el valor del segundo operando:\n\t"<< endl;
cin>>b;
if(a>b){
    cout<<"\n\tEs mayor\n\t"<<a<< endl;
}
else if(a<b){
   cout<<"\n\tEs mayor\n\t"<<b<<endl;
}
else{
    cout<<"\n\tError\t\n"<<endl;
}
return 0;
}


