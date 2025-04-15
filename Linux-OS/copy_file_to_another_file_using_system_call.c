#include <stdio.h> // For printf(), perror(), scanf()
#include <stdlib.h> // For general utilities like exit()
#include <fcntl.h> // You need this for O_RDONLY, O_CREAT, etc.
#include <unistd.h> //  Needed for read(), write(), close()
#include <errno.h> // For errno (used when system calls fail)


#define BUFF_SIZE 1024

int main(int argc, char *argv[]){
    int fd, fd2, read_len;
    char choice;
    char buff[BUFF_SIZE];
    
    if(argc < 3){
        printf("Usage: ./a.out <source file> <destination file>\n");
        return 1;
    }
    
    if((fd = open(argv[1], O_RDONLY)) == -1){
        perror("open source file ");
        return -1;
    }
    
    if((fd2 = open(argv[2], O_WRONLY | O_CREAT | O_EXCL, 0666)) == -1){
        if(errno == EEXIST){
            do{
                printf("File exists. Do you want to overwrite (y/n)? ");
                scanf(" %c", &choice);  // note the space before %c to consume newline
                if(choice == 'n' || choice == 'N'){
                    close(fd);
                    return 0;
                } else if(choice == 'y' || choice == 'Y'){
                    if((fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0666)) == -1){
                        perror("open destination");
                        close(fd);
                        return -1;
                    } else {
                        break;
                    }
                }
            } while(1);
        } else {
            perror("open destination");
            close(fd);
            return -1;
        }
    }
    
    while ((read_len = read(fd, buff, BUFF_SIZE)) > 0) {
        if(write(fd2, buff, read_len) == -1){
            perror("write");
            close(fd);
            close(fd2);
            return -1;
        }  
    }
    
    if(read_len == -1){
        perror("read");
    }

    close(fd);
    close(fd2);
    
    return 0;
}
