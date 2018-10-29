#https://www.youtube.com/watch?v=aw9wHbFTnAQ 

# makefile version 1.0.10.23.2018

CFLAGS=-std=c++17 -g -Wall

all:	
	@printf "\033[36mCompiling \"dfs\"...\n\033[0m"
	@printf "\nRun by typing \033[34m 'make run'\n\n\033[0m"
	g++ $(CFLAGS) dfs.cpp -o dfs.out

# ...................................................................
run:
	@./dfs.out

# ...................................................................

# remove temp files

clean:
	rm -f *.out *.o 
