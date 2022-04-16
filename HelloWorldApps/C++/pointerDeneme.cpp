#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
#define SIZE 25

class strtype{
    public:
    char *p;
    
    public:
    strtype();
    void kopyala(char *ptr);
};


strtype::strtype(){
    p = (char *) malloc(SIZE);
	if(!p) {
		cout << "Allocation error\n";
		exit(1);
	}
	*p = '\0';
}

void strtype::kopyala(char *ptr){
   strcpy(p, ptr);
}

int main(){
    
    strtype gulsum = strtype();

    char str1[SIZE]="Gulsumu seviyorum";
    char *ptr;
    ptr = str1;

    gulsum.kopyala(ptr);

    cout << gulsum.p;

    return 0;
}