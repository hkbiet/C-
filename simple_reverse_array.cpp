#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {

    int n,limit;
    cin>>n;
    limit = n;
    int arr[n];

    while(n>0){

        cin>>arr[n-1];
        n = n - 1;

    }

    while(n<limit){

        cout<<arr[n]<<" ";
        n = n +1 ;


    }

    return 0;
}

