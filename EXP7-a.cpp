/*
Dhairya Thakkar
prn : 24070123037
A2
*/
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
    cout<<"elements are : ";
    for(int i=0;i<o;i++){
    cout <<a[i]<<" ";}
return 0;
}

/*Output:
enter the number of elements : 3
enter the elements 1
2
enter the elements 2
3
enter the elements 3
6
elements are : 2 3 6 */
