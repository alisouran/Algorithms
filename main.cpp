#include <iostream>

using namespace std;

int main()
{
    int x = 3, y = 5 , sum = 0;
    for(int i = 2; i<1000; i++){
        if(i%x==0){
            sum = i+sum;
        }
        else if (i%y==0){
            sum=i+sum;
        }
        else{}
    }
    cout<<"Answer: "<<sum;
    cin.get();
}
