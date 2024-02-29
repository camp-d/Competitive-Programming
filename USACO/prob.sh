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

freopen("$2.in","r",stdin);
freopen("$2.out","w",stdout);

solve();

return 0;
}" >> temp.cpp
touch $2.in
touch $2.out

