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


echo "make clean
make sol
t=\${1:-1} 
./sol < \$t.txt
" >> run.sh
chmod +x run.sh
touch 1.txt
touch 2.txt
touch 3.txt
