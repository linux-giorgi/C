#include <stdio.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <sys/socket.h>
#include <net/if.h>

#ifndef INT_INFO_H
#define INT_INFO_H

struct ifreq interface = {0};
int file_descriptor;


void print_ip(const char *int_name) {

	// copy int_name to interface.ifr_name
	snprintf(interface.ifr_name, IFNAMSIZ, int_name);

	// creating socket
	file_descriptor = socket(AF_INET, SOCK_DGRAM, 0);
	if (file_descriptor < 0) {
		perror("socket_error");
	}	
	
	// give source ipv4
	if(ioctl(file_descriptor, SIOCGIFADDR, &interface) == -1)	{
		perror("ioctl_ipv4");
		close(file_descriptor);
	}

	// output ipv4
	printf("IP: %hhu.%hhu.%hhu.%hhu\n",
					(unsigned char) interface.ifr_hwaddr.sa_data[2],
					(unsigned char) interface.ifr_hwaddr.sa_data[3],
					(unsigned char) interface.ifr_hwaddr.sa_data[4],
					(unsigned char) interface.ifr_hwaddr.sa_data[5]);


	close(file_descriptor);
}

void print_mac(const char *int_name) {

	// copy int_name to interface.ifr_name
	snprintf(interface.ifr_name, IFNAMSIZ, int_name);

	// creating socket
	file_descriptor = socket(AF_INET, SOCK_DGRAM, 0);
	if (file_descriptor < 0) {
		perror("socket_error");
	}	
	
	// give source ipv4
	if(ioctl(file_descriptor, SIOCGIFHWADDR, &interface) == -1)	{
		perror("ioctl_mac");
		close(file_descriptor);
	}

	// source mac	
	printf("MAC: %02x:%02x:%02x:%02x:%02x:%02x\n",
					(unsigned char) interface.ifr_hwaddr.sa_data[0],
					(unsigned char) interface.ifr_hwaddr.sa_data[1],
					(unsigned char) interface.ifr_hwaddr.sa_data[2],
					(unsigned char) interface.ifr_hwaddr.sa_data[3],
					(unsigned char) interface.ifr_hwaddr.sa_data[4],
					(unsigned char) interface.ifr_hwaddr.sa_data[5]);
	
	close(file_descriptor);
}
	
void print_mtu(const char *int_name) {


	// copy int_name to interface.ifr_name
	snprintf(interface.ifr_name, IFNAMSIZ, int_name);

	// creating socket
	file_descriptor = socket(AF_INET, SOCK_DGRAM, 0);
	if (file_descriptor < 0) {
		perror("socket_error");
	}	

	// inputing source mtu
	if (ioctl(file_descriptor, SIOCGIFMTU, &interface) == -1) {
		perror("ioctl_mtu");
		close(file_descriptor);
	}
	
	// source mtu
	printf("MTU: %d\n", interface.ifr_mtu);

	close(file_descriptor);
}

void print_flags(const char *int_name) {

	// copy int_name to interface.ifr_name
	snprintf(interface.ifr_name, IFNAMSIZ, int_name);

	// creating socket
	file_descriptor = socket(AF_INET, SOCK_DGRAM, 0);
	if (file_descriptor < 0) {
		perror("socket_error");
	}	


	// inputing source ipv4 
	if (ioctl(file_descriptor, SIOCGIFFLAGS, &interface) == -1) {
		perror("ioctl_flags");
		close(file_descriptor);
	}

	// source flags
	printf("STATUS: %s\nBROADCAST: %s\nLOOPBACK: %s\n",
					(interface.ifr_flags&IFF_UP) 				? "UP"   : "DOWN",
					(interface.ifr_flags&IFF_BROADCAST) ? "TRUE" : "FALSE",
					(interface.ifr_flags&IFF_LOOPBACK)  ? "TRUE" : "FALSE");

	close(file_descriptor);
}

#endif
