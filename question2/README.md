## Question 1
(K&R Exercise 5-13) Write the program <code>tail</code>, which prints the last n lines of its input. By default, n is 10, let us say, but it can be changed by an optional argument, so that

<code>    tail -n</code>

prints the last n lines. The program should behave rationally no matter how unreasonable the input or the value of n. Write the program so it makes the best use of available storage; lines should be stored as in the sorting program of Seciton 5.6, not in a two-dimensional array of fixed size.

Compile Steps: 

bchun@DESKTOP-48N88BC gcc tail.c Output: bchun@DESKTOP-48N88BC ~/hw6-ericbrian/question2
$ ./a.exe -n < Thesis.txt
number: 10
heading for the far-off future.

The cruel angel's thesis
will soon take flight through the window,

with surging, hot pathos,
if you betray your memories.

Embracing this sky [universe] and shining,
young boy, become the legend


