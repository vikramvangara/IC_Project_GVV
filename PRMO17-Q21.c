#include <stdio.h>
int a =108,i,l=0,j,product,k,n=0;

int main(){
    int s[a/2];
    for(i=1;i<=a;i++){
        if(a%i == 0){
            s[l] = i;
            l = l + 1;
        }
    }

    for(i=0;i<l;i++){
            for(j=0;j<l;j++){
                for(k=0;k<l;k++){
                    product = s[i]*s[j]*s[k];
                    if (product == a){
                            //if ((s[k]>s[i])&&(s[k]>s[j])&&(s[j]>s[i])&&(s[j]<s[k])){
                                n = n + 1;
                                printf("(%d",s[i]);
                                printf(",%d",s[j]);
                                printf(",%d)\n",s[k]);
                                printf("\n");

                            //}
                    }
                }
            }
    }
    printf("The number of ordered triplets =  %d",n);
}

