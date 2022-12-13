#include <iostream>
#include "lib.h"
using namespace std;

int main(){
  int N;
    cin>>N;
    float numeri[N];
    for(int i=0;i<N;i++){
        cin>>numeri[i];
    }
    cout<<array(numeri,N)<<endl;
  return 0;
}
