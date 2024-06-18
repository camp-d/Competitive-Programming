comp=g++

comp_flags = -g -Wall -std=c++20

#sol command is for random problems in ATCODER, CODEFORCES, CSES, etc..

sol : temp.cpp
	$(comp) $(comp_flags) -o sol temp.cpp

# a-f commands are for full contests in CODEFORCES

a : a.cpp
	$(comp) $(comp_flags) -o a.out a.cpp

b : b.cpp
	$(comp) $(comp_flags) -o b.out b.cpp

c : c.cpp
	$(comp) $(comp_flags) -o c.out c.cpp

d : d.cpp
	$(comp) $(comp_flags) -o d.out d.cpp

e : e.cpp
	$(comp) $(comp_flags) -o e.out e.cpp

f : f.cpp
	$(comp) $(comp_flags) -o f.out f.cpp

clean :
	rm -f *.out sol
