//Dhairya Thakkar
// 24070123037
// A2
#include <iostream>
using namespace std ;
int main(){
    int b;
    cout<<"enter the number of elements : ";
    cin>>b;
    int a[b];
     int o= sizeof(a)/sizeof(int);
    for (int i=0;i<o;i++){
         cout<<"enter the elements "<<i+1<<endl;
    cin >> a[i];}
    int s=0;
    for(int i=0;i<o;i++){
        s=s+a[i];
    }
    cout << "sum is "<<s<<endl;
    cout<< "average is "<< s/o;
return 0;
}

/*output:
enter the number of elements : 3
enter the elements 1
2
enter the elements 2
5
enter the elements 3
7
sum is 14
average is 4
*/
