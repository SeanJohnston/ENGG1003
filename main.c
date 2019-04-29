#include <stdio.h> 

int main() {
    int menu;
     
    printf("***Main Menu***\nEnter:\n1.For Rotation Encryption\n2.For Rotation Decryption\n");
    scanf("%d", &menu);
    
    switch(menu){
        case 1:{
             int key = 2;
             char characters[100];
             int output;
             int i=0;
             printf("Enter Message You Wish To Encrypt And Then Your Rotation Key\n");
             scanf("%s", &characters);
             scanf("%d", &key);
             printf("Your Encrypted Message Is : ");
               for(i=0;characters[i] != '\0'; i++){      
                  output = (characters[i]-65 + key) % 26 + 65;
                  printf("%c", output);
                  }
               }
               break;

        case 2:{
             int key2;
             char characters2[100];
             int output2;
             int i2=0;
             printf("Enter Message You Wish To Decrypt And Then Your Rotation Key\n");
             scanf("%s", &characters2);
             scanf("%d", &key2);
             printf("Your Decrypted Message Is : ");
              for(i2=0;characters2[i2] != '\0'; i2++){        
                 output2 =(characters2[i2]-65-key2) % 26 +65;
                 if(output2<65 && output2>39){
                     output2 = output2 +26;}
                     
                     printf("%c", output2);
                 }

               } 
               
               break;
              
        default: 
             printf("***ERROR***\nINVALID ENTRY");

          }

  
    return 0;
}