#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAXLINES 500000 /* max #lines to be sorted */
#define MAXLEN 100000 /* max length of any input line */

int gline(char s[],int lim);
int readlines(char *lineptr[]);
void writelines(char *lineptr[], int n, int end);

char *lineptr[MAXLINES]; /* pointers to text lines */

/* sort input lines */
int main(int argc, char *argv[])
{
	char line[MAXLINES];
    long lineno = 0;
    int c, except = 0, number = 0, found = 0;
	
	while (--argc > 0 && (*++argv)[0] == '-')
    {
        while (c = *++argv[0])
        {
            switch (c) 
            {
                case 'n':
					number = 10;
                    break;
                default:
                    printf("tail:illegal option %c\n", c);
                    argc = 0;
                    found = -1;
                    break;
            }
        }
    }
    
	printf("number: %d\n", number);
	
	int nlines; /* number of input lines read */	
	
	if ((nlines = readlines(lineptr)) >= 0) {
		writelines(lineptr, nlines-number, nlines);
		return 0;
	} 
	else {
		printf("error: input too big to sort\n");
		return 1;
	}
}

/* writelines: write output lines */
void writelines(char *lineptr[], int n, int end)
{
	int i;
	for (i = n; i < end; i++)
		printf("%s\n", lineptr[i]);
}

/* readlines: read input lines */
int readlines(char *lineptr[])
{
	int len, nlines;
	char *p, line[MAXLEN];
	nlines = 0;
	while ((len = gline(line, MAXLEN)) > 0)
		if ((p = malloc(len)) == NULL)
			return -1;
		else {
			line[len-1] = '\0'; /* delete newline */
			strcpy(p, line);
			lineptr[nlines++] = p;
		}
	return nlines;
}

/* gline: read a line into s, return length */
int gline(char s[],int lim)
{
	int c, i;
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
		s[i] = c;
	if (c == '\n') {
		s[i] = c;
	++i;
	}
	s[i] = '\0';
	return i;
}