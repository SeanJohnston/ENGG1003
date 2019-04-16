#include <stdio.h> 


int main() {
    int key = 1;
    char characters[100];
    int output;
    
   
    
    scanf("%c", &characters[100]);
    
    for(int i=0; characters[100] != '\0'; i++){
    output = characters[100]+key%26;
    printf(" %c ", output);
   
    } 
  

    //printf("Encrypted message: %c", );
    

    
 
    return 0;
}