#include <stdio.h>
#include <unistd.h>
ssize_t better_write(int fd, const char *buf, size_t count){
    size_t already_written, to_be_written, written_this_time;
    ssize_t res_write;
    already_written = (size_t) 0;
    to_be_written = count;
    while(to_be_written > (size_t)0){
        res_write = write(fd, &(((const char *)buf) [already_written]), to_be_written);
        if(res_write<(size_t)0){
            /*ERROR*/
            return res_write;
        }
        if(res_write == (size_t) 0){
            /*Nothing written, stop trying*/
            return (ssize_t) already_written;
        }
        written_this_time = (size_t) res_write;
        already_written +=written_this_time;
        to_be_written -= written_this_time;
    }
    return (ssize_t) already_written;
}

size_t string_length(const char* str){
    size_t i;
    for(i = (size_t) 0; str[i]!='\0';i++);
    return i;
}

int main(int argc, char **argv){
    char *str = "Hello World\n";
    better_write(1, str, string_length(str));
    return 0;
}
