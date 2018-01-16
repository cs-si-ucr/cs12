Exercise 1
---

Write a program that lists all of its arguments.

Example:
```bash
$ ./a.out hi there 2 3 4 20
hi there 2 3 4 20
$
```


Exercise 2
---

Write a program that takes each integer in a file and outputs it on new file on separate lines.
You should ask for the name of the input and output files from the user.

Do _**not**_ allow the input and output filenames to be the same!

**Bonus 1**:
If the file contains non-integer terms, do not put them in the resulting file.

**Bonus 2**:
Allow the user to pass in filenames via command line arguments.
The first argument should be the input file name.
The second should be the output file name.

If only one argument is passed in, assume it is the input file name and ask for the output file name.

If no arguments are passed in, ask for both the input and output file names.


<!-- note to maintainer: this is very similar to their lab, but presumably harder.
     Make sure this is only given after the deadline. If that cannot be done,
     comment this exercise out. -->
Exercise 3
---
Given a file containing a list of pairs of integers in the following format:
> 0 1 <br>
> 3 1 <br>
> 9 10 <br>
> 16 93 <br>
> 20 90 <br>
> 3 9 <br>

Write a program that outputs the sum of each pair of numbers on a newline in another file.

The file will only contain integers and will always be in the above format (hint, you can use
that to your advantage...)

Write your own sample file. The file names for both input and output are specified on the command line.

**Bonus**:
If the file contains non-integer terms, ignore them.


Exercise 4
---

Write a program that prompts the user to enter a pair of integers.
Read those integers as **strings** (either as one large string or two sepearte ones)
and outputs thier sum to the terminal. 

This program continuously prompts the user until they enter 'q'.

Hint: You will be needing string streams to do this.

Extra Help
---

* [C++.com Tutorial for File I/O](http://www.cplusplus.com/doc/tutorial/files/)
