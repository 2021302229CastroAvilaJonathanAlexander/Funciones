#include<iostream>
using namespace std;

int main()
{
int n,f;
long double factorial;
cout<<"\n\tIntroduzca un número:\n\t"<< endl;
cin>>n;
factorial=1;
for(f=1;f<=n;f++)
    factorial=factorial*f;
cout<<"\n\tFactorial de\n\t"<<n<<"="<<factorial<<endl;
return 0;
}
