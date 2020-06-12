// in ra cac chu so chan tu 1 den 100
#include <stdio.h>

int main(){
    for(int i=1;i<=100;i++){
        if(i%2!=0){
            continue;
       }    
        printf("%d ",i);
    }
}
    