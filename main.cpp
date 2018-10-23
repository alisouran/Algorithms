#include <iostream>

using namespace std;

int main()
{
    int x = 0, y = 1, sum=0, sum2=0;;
    while(true){
        sum=x+y;
        if(sum>4000000){
            break;
        }
        if(sum%2==0){
            sum2=sum+sum2;
        }
        x=y;
        y=sum;
    }
cout<<"sum is: "<<sum2;

    cin.get();
}
