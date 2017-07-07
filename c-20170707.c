#include <stdio.h>

/* rall */
/* usage: rall from/to [inputfilename] [outputfilename] */

FILE* inputf;
FILE* outputf;
int isFrom = 0;
void rall(int isFrom);
main(int argc, char* argv[]) {
    isFrom=(strcmp(argv[1],"from")==0);
    if(isFrom||strcmp(argv[1],"to")==0) {
        inputf=fopen(argv[2],"r");
        outputf=fopen(argv[3],"w");
        rall(isFrom);
    } else printf("usage: rall from/to [inputfilename] [outputfilename]\n");
    return 0;
}
void rall(int isFrom) {
    int c;
    if(isFrom) {
        while((c=getc(inputf))!=EOF) {
            if(c=='\n') putc((int)'\r',outputf), putc(c,outputf);
            else if(c=='\r') {
                if(getc(inputf)=='\n') putc('\r',outputf),putc('\n',outputf);
                else putc(c,outputf);
            } else putc(c,outputf);
        }
    } else if(isFrom==0) {
        while((c=getc(inputf))!=EOF) {
            if(c=='\r') {
                if(getc(inputf)=='\n') putc('\n',outputf);
                else putc(c,outputf);
            } else putc(c,outputf);
        }
    }
    fclose(inputf);
    fclose(outputf);
}
