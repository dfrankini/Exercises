#include <stdio.h>
int Passkey() {
        
        char username[100];
        printf("Enter username : ");
        scanf("%s",username);
        
        int length = 0;
        while(username[length++]!='\0');
        length--;
        
        int shift;
        printf("Enter shift : ");
        scanf("%d", &shift);
        
        char password[length+1];
        
        for(int i=0 ; i<length ; i++) {
                password[i] = username[i]+shift;
        }
        password[length] = '\0';
        
        printf("User Password : %s",password);
        
        FILE *fp;
        fp = fopen("username.key","w");
        fprintf(fp,"%s",password);

        
        return 1;
}