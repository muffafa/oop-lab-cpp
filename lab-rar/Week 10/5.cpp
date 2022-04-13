#include <iostream>
#include <cstring>
using namespace std;

class output{
    static char outbuf[255]; // this is the shared resource
    static int inuse; // better available if 0;
    static int oindex; // index of outbuf
    char str[80];
    int i, who; // identifies the object , must be > 0
    public:
    output(int w, char *s) { strcpy(str, s); i = 0; who = w;}

    int putbuf(){
        if(!str[i]) {inuse = 0; return 0;}// signal termination 
        if(!inuse) inuse = who; // get buffer
        if(inuse != who) return -1;// in use by someone else
        if(str[i]){ // still chars to output
            outbuf[oindex] = str[i++];
            outbuf[++oindex] ='\0'; // always keep null-
            return 1;
        }else return 0;
    }

    void show() {cout<<outbuf<<endl; }
};

char output::outbuf[255]; // this is the shared resource
int  output::inuse  = 0; // buffer available if 0
int  output::oindex = 0; // index of outbuf

int main(){
    output o1(1, "This is a test"), o2(2, " of statics");
    while(o1.putbuf() | o2.putbuf()); // output chars
    o2.show();
    return 0;
}