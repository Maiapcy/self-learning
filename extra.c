#include<unistd.h>
int main()
{
    int i=0;
    char a[]={"abcdefghij"};
    while (i<10){
        write(1,&a[i],1);  
        i++;  
    }
}