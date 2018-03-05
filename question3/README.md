## Question 2

(K&R Exercise 5-14 & 5-15) Modify the sort program to handle a -r flag, which indicates sorting in reverse (decreasing) order. Be sure that -r works with -n.

Also, add the option -f to fold upper and lower case together, so that case distinctions are not made during sorting; for example, a and A compare equal.

Compile Steps:
bchun@DESKTOP-48N88BC ~/hw6-ericbrian/question3
$ gcc sort2.c

Output:
Example 1 (gibberish.txt):

bchun@DESKTOP-48N88BC ~/hw6-ericbrian/question3
$ ./a.exe -n < gibberish.txt
Number of lines printed = 10
CD
GG
Ge
HI
ad
ae
aye
bl
e
fa

bchun@DESKTOP-48N88BC ~/hw6-ericbrian/question3
$ ./a.exe -n -r < gibberish.txt
Number of lines printed = 10
yo
jf
hi
hd
fe
fa
aye
bl
e
ae

bchun@DESKTOP-48N88BC ~/hw6-ericbrian/question3
$ ./a.exe -n -r -f< gibberish.txt
Number of lines printed = 10
yo
jf
hi
hi
hd
gg
fa
fe
ge
e

Example 2 (words.txt):
bchun@DESKTOP-48N88BC ~/hw6-ericbrian/question3
$ ./a.exe -n < words.txt
Number of lines printed = 10
Bread
CODE
Hello
LOWERCASE
MOUSE
Mouse
Uppercase
bread
code
hello

bchun@DESKTOP-48N88BC ~/hw6-ericbrian/question3
$ ./a.exe -n -r < words.txt
Number of lines printed = 10
uppercase
mouse
lowercase
hello
code
Mouse
Uppercase
bread
MOUSE
LOWERCASE

bchun@DESKTOP-48N88BC ~/hw6-ericbrian/question3
$ ./a.exe -n -r -f< words.txt
Number of lines printed = 10
uppercase
uppercase
mouse
mouse
mouse
hello
lowercase
lowercase
hello
code

Example 3 (Thesis.txt):
bchun@DESKTOP-48N88BC ~/hw6-ericbrian/question3
$ ./a.exe -n < Thesis.txt
Number of lines printed = 10
A blue wind is now
A blue wind is now
But someday I think you'll find out
But someday I think you'll find out
Embracing this sky [universe] and shining,
Embracing this sky [universe] and shining,
Embracing this sky and shining,
Even knowing I'll never be a goddess or anything like that,
I live on.
I think that it is a "bible"

bchun@DESKTOP-48N88BC ~/hw6-ericbrian/question3
$ ./a.exe -n -r < Thesis.txt
Number of lines printed = 10
young boy, become the legend!
young boy, become the legend!
young boy, become the legend!
young boy, become the legend
you're so intent on seeking it out,
you're so intent on seeking it out,
you are merely gazing at me and smiling.
you are merely gazing at me
with surging, hot pathos,
with surging, hot pathos,

bchun@DESKTOP-48N88BC ~/hw6-ericbrian/question3
$ ./a.exe -n -r -f < Thesis.txt
Number of lines printed = 10
young boy, become the legend!
young boy, become the legend!
young boy, become the legend!
young boy, become the legend!
young boy, become the legend
you're so intent on seeking it out,
you're so intent on seeking it out,
you shine brighter than anyone else.
you held tight to the form of life
you are merely gazing at me and smiling.


