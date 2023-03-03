  all: MYps.c 

  gcc -g  -o MYps  -Wall -Werror -c MYps.c

  clean: 
	  $(RM) MYps