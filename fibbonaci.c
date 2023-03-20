#include<stdio.h>
int main()
{
    int a,b,i,first=0,second=1,n;
    printf("Enter the number of terms\n");
    scanf("%d",&n);

    for(i=0 ; i<n ; i++){
            if(i<=1){
                b=i;}
            else{
                b=first+second;
                first=second;
                second=b;
            }
            printf("%d ",b);

    }

}
