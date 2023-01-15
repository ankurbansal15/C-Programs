#include <stdio.h>
int StringLength(char *str);
int main(){
    // char str[] = {'A','B','\0'};
    // char *ptr = str;
    // while(*ptr != '\0'){
    //     printf("%c\n",*ptr);
    //     ptr++;
    // } 
    char str[100];
    scanf("%s",str);
    printf("%s\n",str);
    printf("%d",StringLength(str));



    return 0;
}
int StringLength(char *str){
    int count = 0;
    while (*str != '\0')
    {
        count++;
        str++;
    }
    return count;
    
}