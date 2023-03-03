  all: MYps.c 
 	  gcc -g -Wall -o MYps MYps.c -Wall -Werror

  clean: 
	  $(RM) MYps