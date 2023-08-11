#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <sys/types.h>
int main(){
char userChoice = 'z';
while (userChoice != 'q') {
        //print menu
        printf("a: ls \n");
        printf("b: ps \n");
        printf("c: who \n");
        printf("q for quit \n");
        scanf(" %c", &userChoice);
        pid_t cpid;
        pid_t gcpid;
        if(cpid == 0){
                gcpid = fork();
                if(userChoice == 'a'){
                        execlp("/bin/ls", "ls", NULL);
                }
                if(userChoice == 'b'){
                        execlp("/bin/ps", "ps", NULL);
                }
                if(userChoice == 'c'){
                        execlp("/bin/whoami", "whoami", NULL);
                }
                if(userChoice == 'q'){
                        printf("Shut up and good bye :D ");
                }
                exit(0);
        }
        waaait (NULL);
        exit(0);
}
printf("parent terminated\n");
}
