#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <time.h>


int main(){
    
    
    struct stat buf;
    
    stat("stat.c", &buf);
    
    int timeT = buf.st_atime;
    
    printf("%x\n", timeT);

    return 0;
}
