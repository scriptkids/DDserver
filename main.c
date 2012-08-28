#include "dd.h"

int server_port = 80; // 0 stands any port can be ok.
char server_root[100] = "/var/www";
int setsockoptflag = -1;
int server_sock;

int main(void){
	
	server_sock = server_start();

	return 0;
}

