#include "dd.h"

int server_port = 80; // 0 stands any port can be ok.
char server_root[100] = "/var/www";
int setsockoptflag = 1;
int server_sock;

char buf[10000];
char temp[] = "HTTP/1.1 200 OK\r\nContent-Type:text/html\r\n\r\nThis page you see";
int main(void){
	int connfd,n;
	server_sock = server_start();

	printf("Server start running at port 80 :)\n");
	while( 1  ){
		
		connfd = accept( server_sock, NULL, NULL );
		n=read(connfd,buf,10000);
		buf[n] = 0;
		puts(buf);
	
		write( connfd, temp, sizeof(temp) );

		close(connfd);
	}

	return 0;
}

