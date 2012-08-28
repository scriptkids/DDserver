#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#include<sys/types.h>
#include<sys/socket.h>
#include<errno.h>
#include<netinet/in.h>

#define MAXCONN 88

/* utils */
void err_exit( const char *s );
int server_start(void);

/* main */
extern int server_port; // 0 stands any port can be ok.
extern char server_root[100];
extern int setsockoptflag;
extern int server_sock;

