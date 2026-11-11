#include <stdio.h>
void copy(char *psource, char *ptarget, unsigned num_char)
{
    // TODO: write your code here
    unsigned i = 0;
    
    while (i < num_char && *psource != '\0') {
        *ptarget = *psource;  
        ptarget++;            
        psource++;            
        i++;
    }
    
   
    *ptarget = '\0';

}

void concatenate(char *psrc1, char *psrc2, char *ptarget, unsigned buffer_size)
{
    // TODO: write your code here
    unsigned space_left = buffer_size;
    char *p_dest = ptarget;
    char *p_src = psrc1;

    while (*p_src != '\0' && space_left > 1) {
        *p_dest = *p_src;
        p_dest++;
        p_src++;
        space_left--;
    }

    p_src = psrc2;
    while (*p_src != '\0' && space_left > 1) {
        *p_dest = *p_src;
        p_dest++;
        p_src++;
        space_left--;
    }

    *p_dest = '\0';
    
}

// DO NOT change the code below
#ifndef ___TEST___
int main(void)
{
    char buffer[100];
    char *source = "This is the first sentence.  ";
    char *target = "This is the second sentence.";

    concatenate(source, target, buffer, 70);

    printf("%s", buffer);
    return 0;
}
#endif
// DO NOT change the code above