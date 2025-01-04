#include <stdio.h>
#include <string.h>

void sreverse(char* s){
    int n = strlen(s);
    for(int i=0;i <n/2;i++){ // range should be n/2
        char temp = s[i];
        s[i] = s[n - i - 1];
        s[n - i - 1] = temp; // should use a temp swap swap(s[i], s[i-n-1])
    }
}

int main(){
    int n;
    scanf("%d",&n); 
    char s[n];
    scanf("%s", s);
    sreverse(s);
    printf("%s", s);

}
 
