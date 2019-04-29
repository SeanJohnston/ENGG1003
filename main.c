#include <stdio.h> 

int main() {
    int menu;
     
    printf("***Main Menu***\nEnter:\n1.For Rotation Encryption\n2.For Rotation Decryption\n");
    scanf("%d", &menu);
    
    switch(menu){
        case 1:{
             int key = 2;
             char characters[]= "HELLO WORLD";
             int output;
             int i=0;
             
             printf("\nYour Encrypted Message Is : ");
               for(i=0;characters[i] != '\0'; i++){
                  if(characters[i] == ' '){
                  output = characters[i];
                  printf("%c", output);
                  }
                  else
                  output = (characters[i]-65 + key) % 26 + 65;
                  printf("%c", output);
                  }
               }
               break;

        case 2:{
             int key2 = 2;
             char characters2[]= "VJG SWKEM DTQYP HQZ LWORGF QXGT VJG NCBA FQI";
             int output2;
             
             int i2=0;
     
              for(i2=0;characters2[i2] != '\0'; i2++){        
                 if(characters2[i2] == ' '){
                 output2=characters2[i2];
                 printf("%c", output2);
                 }
                 else
                 output2 =(characters2[i2]-65-key2) % 26 +65;
                 if(output2<65 && output2>39){
                     output2 = output2 +26;}
                     printf("%c", output2);
                 }

               } 
               
               break;
              }

              
  
    return 0;
}