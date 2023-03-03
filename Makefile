  all: MYps.c 
 	  gcc -g  -o MYps MYps.c -Wall -Werror

  clean: 
	  $(RM) MYps