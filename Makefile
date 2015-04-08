all: mystery

mystery:
	### This is one of the very few times that I condone
	### compiling without warnings.
	gcc 1k-codec.c -o mystery
