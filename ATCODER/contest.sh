cp -r ../TEMPLATE $1
cd $1
cp temp.cpp a.cpp
cp temp.cpp b.cpp
cp temp.cpp c.cpp
cp temp.cpp d.cpp
cp temp.cpp e.cpp
cp temp.cpp f.cpp
cp temp.cpp g.cpp
#This should be changed to produce alphbetical names in sequence
#starting from A up to and including the provided command line argument
cp 1.txt a
cp 1.txt b
cp 1.txt c
cp 1.txt d
cp 1.txt e
cp 1.txt f
cp 1.txt g
rm temp.cpp
rm temp_CF_CONTEST.cpp
rm 1.txt
