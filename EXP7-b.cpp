//Dhairya Thakkar
//24070123037
//A2
#include <iostream>
using namespace std ;
int main(){
    int b;
    cout<<"enter the element for search : ";
    cin>>b;
    int a[10]={1,2,3,4,6,22,34,66,43,76};
     int o= sizeof(a)/sizeof(int);
     int y=0;
    for (int i=0;i<o;i++){
        if(a[i]==b){
            cout<<"number "<< b<<" found at "<<i+1<<" position ";
            y=1;
            break;
        }
        else{
            continue;
        }
    }
    if(y==0){
        cout<<"number "<<b<<" not found in the array";
    }
         
       
return 0;}

/*output:
enter the element for search : 2
number 2 found at 2 position 

enter the element for search : 45
number 45 not found in the array
*/
