// 5. Write a program to reverse the given string:- “!gnirts siht desrever yllufsseccus evah uoy”.

#include <stdio.h>
#include <string.h>

int main(){
    char msg[100]=
	"!gnirts siht desrever yllufsseccus evah uoy";

    
    strrev(msg);
    printf("%s",msg);
    return 0;
}
