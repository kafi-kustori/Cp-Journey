#include <iostream>
#include <cmath>
using namespace std;
int main(){

    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        int sum;
        sum = ceil((double)n/6) * x;
        cout<<sum<<endl;
    }
}