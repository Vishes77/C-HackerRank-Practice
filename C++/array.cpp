#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int tot ;
    cin>>tot;
    int arr[tot];
    for(int i=0;i<tot;i++){
        cin>>arr[i];
    }
    for (int i=tot-1;i>=0;i--){
        cout<<arr[i]<<" ";
    }

    
    return 0;
}
