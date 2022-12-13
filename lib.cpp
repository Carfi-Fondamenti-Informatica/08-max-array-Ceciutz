//
// Created by Cecilia Utzeri on 13/12/2022.
//

#include "lib.h"
float array(float a[], int d){
    for(int i=0;i<d;i++){
        if(a[0]<=a[i]){
            a[0]=a[i];
        }else{
            a[i]=a[0];
        }
    }
    return a[0];
}
