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

//char arr[] = {0x3C, 0xF7, 0xBF, 0x3C, 0xD9, 0x53, 0x49, 0x57, 0x33, 0x27, 0x68, 0xBA, 0x70, 0x28, 0x65};

char test[16] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O'};

//enc(test,1);

//dec(test,1);

for(unsigned i = 0; i < 256; i++){
    char arr[16] = {'\x3C', '\xF7', '\xBF', '\x3C', '\xD9', '\x53', '\x49', '\x57', '\x33', '\x27', '\x68', '\xBA', '\x70', '\x28', '\x65'};
    dec(arr, i);
}

return 0;
}
