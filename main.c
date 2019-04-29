#include <stdio.h> 

int main() {
    int menu; // Initializing interger for switch loop to create "main menu"
     
    printf("***Main Menu***\nEnter:\n1.For Rotation Encryption\n2.For Rotation Decryption\n"); // Text showing user what to enter to access that which they desire
    scanf("%d", &menu); //takes interger saves it in "menu" which then sends user to which case they chose
    
    switch(menu){
        case 1:{
             int key;
             char characters[100]; //Setting up string of 100 letters max a safe number for single words
             int output;
             int i=0;
             printf("Enter Message You Wish To Encrypt And Then Your Rotation Key\n"); //Text for user
             scanf("%s", &characters); // scaning and saving message
             scanf("%d", &key);        // scaning and saving key
             printf("Your Encrypted Message Is : ");
               for(i=0;characters[i] != '\0'; i++){      // this for loop repeats the below equation on each letter so every single letter is encrypted
                  output = (characters[i]-65 + key) % 26 + 65; // normal equation apart from the +65 and -65, this is for the ASCII table setting the intergers to captial letters
                  printf("%c", output); //%c connverts to ASCII
                  }
               }
               break;  // Exit Loop

        case 2:{
            // The start of the rotation decryption section is similar to up until the 'if' statement
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
                 if(output2<65 && output2>39){  // this is a fix to an error found in decryption which wouldn't wrap the letters around to the end, A & B wouldn't become Y&Z, however this is fixed by pushing anythingn below 65(this is A) in the ASCII table up by 26
                     output2 = output2 +26;}
                     printf("%c", output2);
                 }

               } 
               
               break; // Exit Loop
              
        default: 
             printf("***ERROR***\nINVALID ENTRY");  // incase incorrect interger entered

          }

  
    return 0;
}