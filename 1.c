#include <stdio.h>
int main(){
    int i,j,n=0,s=0;
    char a[100],k;
    scanf("%[^\n]%*c",a);

    for(i=0;a[i]!='\0';i++)
        n++;
     printf("%d\n",n);//b
    for(i=0;i<n;i++){
        if(64<a[i]&&a[i]<91)
            a[i]=a[i]+32;
         else if(96<a[i]&&a[i]<123)
            a[i]=a[i]-32;
    }//a
    for(i=0;i<n;i++){
        if(47<a[i]&&a[i]<58)
            s=s+a[i]-48;
    }//c
    n=0;
    for(i=0;a[i]!='\0';i++){
        n++;
        k=a[n];
        a[n]='\0';
        printf("%s %d ",a,n);
        a[n]=k;

    }//d
    return 0;
}
