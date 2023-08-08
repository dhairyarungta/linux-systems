#include <bits/stdc++.h>
using namespace std;


int main(){
}


int io_setup(int maxevents, io_context_t* ctxp);
int io_destroy(io_context_t ctx);

//submit requests to the io_context object
//request are obejcts of type iocb

struct iocb
{
    void *data;
    short aio_lio_opcode;
    int aio_fildes;

    union{
        struct{
            void *buf;
            unsigned long nbytes;
            long long offset;
        }c;
    }u;

}


int io_submit (io_context_t ctx, long nr, struct iocb*(ios)[]);

struct io_event 
{
    void *data;
    struct iocb *obj;
    long long res;

    
}