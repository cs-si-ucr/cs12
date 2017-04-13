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

Write a program that takes each integer in a file and puts it on a separate line.
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

Write a program that prints the sum of all the numbers in a file.
The file will only contain integers.
The file name will be provided by the user at runtime.

Print the sum of the integers on each line, followed by the sum of all the integers.

**Bonus**:
If the file contains non-integer terms, ignore them.



