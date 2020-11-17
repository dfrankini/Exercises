#include <stdio.h>
int Passkey() {
        
        char username[100];
        printf("Enter passkey: ");
        scanf("%s",username);
        
        int length = 0;
        while(username[length++]!='\0');
        length--;
        
        int shift;
        printf("Enter shift amount: ");
        scanf("%d", &shift);
        
        char password[length+1];
        for(int x=0 ; x<length ; x++) {
                password[x] = username[x]+shift;
        }
        password[length] = '\0';
        printf("User Password : %s",password);
        
        FILE *fp;
        fp = fopen("username.key","w");
        fprintf(fp,"%s",password);

        
        return 1;
}