//Operating System Practical 2
//set 1



//Name - Shivank Chaudhary
//college Roll No- 20201424
//University roll no- 20020570031


#include <stdio.h> 
#include <sys/types.h> 
#include <unistd.h> 

void forkexample() 
{ 
    // child process because return value zero 
    if (fork() == 0) 
        printf("Child says \"hello\"!\n"); 

    // parent process because return value non-zero. 
    else
        printf("Parent says \"hello\"!\n"); 
} 

int main() 
{ 
    forkexample(); 
    return 0; 
}
