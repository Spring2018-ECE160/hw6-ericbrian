#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAXLINES 5000 /* max #lines to be sorted */
#define MAXLEN 1000 /* max length of any input line */

char *lineptr[MAXLINES]; /* pointers to text lines */
int readlines(char *lineptr[], int nlines);
void writelines(char *lineptr[], int nlines);
void sort(char *lineptr[], int left, int right);
int gline(char s[], int lim);
void reverseArray(char *v[], int nlines);
void swap(char *v[], int i, int j);
void lower(char v[]);
/* sort input lines */
int main(int argc, char *argv[])
{
	int number;
	int reverse = 0;
	int fold = 0;
	int found = 0;
	
	int c;
	
	while (--argc > 0 && (*++argv)[0] == '-')
    {
        while (c = *++argv[0])
        {
            switch (c) 
            {
                case 'n':
					number = 10;
					printf("Number of lines printed = %d\n", number);
                    break;
				case 'r':
					reverse = 1;
					break;
				case 'f':
					fold = 1;
					break;
                default:
                    printf("tail:illegal option %c\n", c);
                    argc = 0;
                    found = -1;
                    break;
            }
        }
    }
			
	int nlines; /* number of input lines read */
	if ((nlines = readlines(lineptr, MAXLINES)) >= 0) {
		if(fold == 1)
			for(int i = 0; i < nlines; i++) {
				lower(lineptr[i]);	
			}
		printf("\n");
		sort(lineptr, 0, nlines-1);
		if (reverse == 1)
			reverseArray(lineptr, nlines);
		printf("Sorted lines: \n\n");
		writelines(lineptr, number);
		return 0;
	} 
	else {
		printf("error: input too big to sort\n");
		return 1;
	}
}


int readlines(char *lineptr[], int maxlines)
{
	int len, nlines;
	char *p, line[MAXLEN];
	nlines = 0;
	while ((len = gline(line, MAXLEN)) > 0)
		if (nlines >= maxlines || (p = malloc(len)) == NULL)
			return -1;
		else {
			line[len-1] = '\0'; /* delete newline */
			strcpy(p, line);
			lineptr[nlines++] = p;
		}
	return nlines;
}

/* writelines: write output lines */
void writelines(char *lineptr[], int nlines)
{
	int i;
	for (i = 0; i < nlines; i++) {
		printf("%s\n", lineptr[i]);
	}
}

/* gline: get line into s, return length */
int gline(char s[], int lim)
{
	int c, i;
	i = 0;
	while (--lim > 0 && (c=getchar())!= EOF && c != '\n')
		s[i++] = c;
	if (c == '\n')
		s[i++] = c;
	s[i] = '\0';
	return i;
}

/* sort: sort v[left]...v[right] into increasing order */
void sort(char *v[], int left, int right)
{
	int i, last;
	void swap(char *v[], int i, int j);
	if (left >= right) /* do nothing if array contains */
		return; /* fewer than two elements */
	swap(v, left, (left + right)/2);
	last = left;
	for (i = left+1; i <= right; i++)
		if (strcmp(v[i], v[left]) < 0)
	swap(v, ++last, i);
	swap(v, left, last);
	sort(v, left, last-1);
	sort(v, last+1, right);
}

void reverseArray(char *v[], int nlines) {
	char temp[100];
	for(int i = 0; i < ((nlines-1)/2)-1; i++) {
		if (nlines-i!=i){
			strcpy(temp,v[i]);
			strcpy(v[i],v[nlines-i-1]);
			strcpy(v[nlines-i-1],temp);
		}
	}
}
	
/* swap: interchange v[i] and v[j] */
void swap(char *v[], int i, int j)
{
	char *temp;
	temp = v[i];
	v[i] = v[j];
	v[j] = temp;
}

void lower(char v[]) {
	int i = 0;
	while(v[i] != '\0') {
		if(v[i] != '\0' && (v[i]>='A' && v[i]<='Z'))
			v[i] = v[i] + 32;
		i++;
	}
}

