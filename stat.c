#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <time.h>


int main(){
    
    
    struct stat buf;
    
    stat("stat.c", &buf);
    
    char str[100];
    
    sprintf(str, "Size of file: %lld bytes", buf.st_size);
    printf("%s\n", str);
    
    //printf("size: %lld\n", buf.st_size);
    mode_t *mode = &buf.st_mode;
    
    printf("%d\n", mode);
    printf("permissions: %o\n", *mode);
    printf("permissions: %o\n", *mode++);

    printf("Time last accessed: %s\n", ctime(&buf.st_atime));

    return 0;
}
