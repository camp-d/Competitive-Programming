#include<bits/stdc++.h>

typedef long long ll;

void enc(char* flag, int key){
    char *start = flag;
    while(*flag){
        key = key*13 + 37;
        *flag^=(key);
        *(flag++) += 3;
    }
    printf("%s\n", start);
}

void dec(char* flag, unsigned key){
    char *start = flag;
    std::cout << "Key before xor:" << key << std::endl;
    while(*flag){
        *(flag) -= 3;
        key = key*13 +37;
        *flag = (*flag ^ key);
        flag++;
    }
    printf("%s\n", start);
    std::cout << "Key after xor:" << key << std::endl;
}


void test(){
    //test++ += 1;
    //if 
}

int main()
{
std::ios_base::sync_with_stdio(false); 
std::cin.tie(0); 
std::cout.tie(0);

std::string message;

while(std::cin >> x)
    std::cout << x << std::endl;

return 0;
}
