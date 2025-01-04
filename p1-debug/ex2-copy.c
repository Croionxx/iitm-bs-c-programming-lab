#include<stdio.h>

//copy the string from src to dst

void string_copy(char s[], char d[]){
    int i = 0;
    while(s[i] != '\0'){
        d[i] = s[i];
        i++;
    }
}

int main(){
    char src[80] = "red";
    char dst[80] = "";
    string_copy(src, dst);
    printf("%s\n", dst);
    return 0;
}

