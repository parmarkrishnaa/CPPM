// 16. To check if any entered string is palindrome or not.

#include <stdio.h>
#include <string.h>

int main(){
    char name[100]="maam";

    strrev(name);
    
    if(strrev(name)==name){
    printf("%s",name);
}
    return 0;
}
