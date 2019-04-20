#include <stdio.h> 

int main() {
    int key = 2;
    char characters[100]= "HELLO WORLD";
    int output;
    int i=0;
    
    for(i=0;characters[i] != '\0'; i++){
        if(characters[i] == ' '){
           printf(" ");
        }
        else
        output = (characters[i]-65 + key) % 26 + 65;
        printf("%c", output);
    }
    
    
    return 0;
}