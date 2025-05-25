// open a file and write data to it

/* headers */
#include <stdio.h>          /* for standard i/o operations like printf, scanf, perror */
#include <unistd.h>         /* provides access to write() and close() system calls */
#include <fcntl.h>          /* defines constants like O_WRONLY and O_CREAT,.. used in file control operations */

/* O_WRONLY - open the file for write only 
O_CREAT - create the file if it doesn't exist 
0644 - is file permission setting */

int main(){                                               /* entry of the program */
    int fd = open("data.txt", O_WRONLY | O_CREAT, 0644);  /* open() is used to open/create a file named data.txt */
    if (fd < 0){                                          /* checks if open failed(returns -1 if fails) */
        perror("open error");                             /* prints the error reason to stderr */
        return 1;                                         /* returns 1 to indicate error */
    }
    write(fd, "Hello, file!\n", 13);                      /* writes 13 bytes */
    close(fd);                                            /* always a good practise to free the file descripter */
    return 0;
}