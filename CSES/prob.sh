mkdir $1
cd $1
cp ../../TEMPLATE/makefile makefile
echo "#include<bits/stdc++.h>

typedef long long ll;

void solve(){

}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

solve();

return 0;
}" >> temp.cpp


echo "make
./a.out < 1.txt
" >> run.sh
chmod +x run.sh
touch 1.txt
