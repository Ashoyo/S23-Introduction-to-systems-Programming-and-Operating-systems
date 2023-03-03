# Project--1-The-proc-filesystem
Project -1 The /proc filesystem



Investigate /proc file system report-

The /proc file system is a way for processes to access kernel and process information through files.

contains process-specific information-  /proc--  contains directories and files that provides -- memory usage, id ,etc

can be use for debugg, use command and API.

 structured and hierarchical manner.
 
 
 
 Design Description- first I start by doing getopt to setup my main then make an  flag for each of my functions then I would comment out all of them and uncomment one by one for testing purposes.Following that I would solve eeach function similar to how I did the week2 memo and cpuinf.


 testing plan- After having an ideal design plan I began writing my function and testing it in getopt first with -s which was not working correctly.So I decided to make an own main for -s to start there after a little bit of debug and coding I got that part working.Then I revert it back to an function and had the print state in my Myp.c. After doing my very first function I realize that most of the other ones following the same concept so I copy my -s function and start modifying it to get the right poistions for some and for others like s1 and cmdline was tricky which was kind of different as I use an different idea to get the right value.FIanlly I added all the functions into MYps.c so all of the flags has an function to run so my file was able to run -Wall -werror and works. 

