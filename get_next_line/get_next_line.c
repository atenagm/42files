#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "get_next_line.h"
#include "../vmiron2/libft.h"

int get_next_line(int const fd,char **line)
{
    int ret;
    char buff[BUFF_SIZE + 1];
    ret = read(fd,buff,BUFF_SIZE);
    buff[ret] = '\0';

    *line = (char *)malloc(sizeof(char) * (BUFF_SIZE + 1));
    
    int i = 0;
    
    while (buff[i] && buff[i] != '\n')
    {
            (*line)[i] = buff[i];
            i++;
    }
    if (ret > 0)
        return (1);
    else
        return (0);
   
}
int main(void)
{
    char    *line;
    int     fd;
    
    fd = open("test.txt", O_RDONLY);
    while (get_next_line(fd, &line))
        printf("%s", line);
    return (0);
}