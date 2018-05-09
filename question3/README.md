## Question 3

(K&R Exercise 5-14 & 5-15) Modify the sort program to handle a -r flag, which indicates sorting in reverse (decreasing) order. Be sure that -r works with -n.

Also, add the option -f to fold upper and lower case together, so that case distinctions are not made during sorting; for example, a and A compare equal.

Compile Steps:
gcc 3.c
Output:
yueke@DESKTOP-CHGR6VM ~/hw6-keira-ray-2/question3
$ ./a.exe -r -f < sample.txt
This
sample
is
file
a

yueke@DESKTOP-CHGR6VM ~/hw6-keira-ray-2/question3
$ ./a.exe -f < sample.txt
a
file
is
sample
This

