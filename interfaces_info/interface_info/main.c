#include <stdio.h>
#include <sys/ioctl.h>
#include <unistd.h>
#include <sys/socket.h>
#include <net/if.h>

int main(void) {

	// init ifreq struct
	struct ifreq ifr = {0};	
	int file_descriptor;

	snprintf(ifr.ifr_name, IFNAMSIZ, "enp0s31f6"); // "enp0s31f6"

	// initial socket
	file_descriptor = socket(AF_INET, SOCK_DGRAM, 0);
	
	// check socket
	if (file_descriptor < 0) {
		perror("socket");
	}

	// inputing source mac
	if (ioctl(file_descriptor, SIOCGIFHWADDR, &ifr) == -1) {
		perror("ioctl_mac");
		close(file_descriptor);
		return 1;
	}

	// source mac	
	printf("MAC: %02x:%02x:%02x:%02x:%02x:%02x\n",
					(unsigned char) ifr.ifr_hwaddr.sa_data[0],
					(unsigned char) ifr.ifr_hwaddr.sa_data[1],
					(unsigned char) ifr.ifr_hwaddr.sa_data[2],
					(unsigned char) ifr.ifr_hwaddr.sa_data[3],
					(unsigned char) ifr.ifr_hwaddr.sa_data[4],
					(unsigned char) ifr.ifr_hwaddr.sa_data[5]);

	// inputing source ipv4
	if (ioctl(file_descriptor, SIOCGIFADDR, &ifr) == -1) {
		perror("ioctl_ipv4");
		close(file_descriptor);
		return 1;
	}

	// source ipv4
	printf("IP: %hhu.%hhu.%hhu.%hhu\n",
					(unsigned char) ifr.ifr_addr.sa_data[2],
					(unsigned char) ifr.ifr_addr.sa_data[3],
					(unsigned char) ifr.ifr_addr.sa_data[4],
					(unsigned char) ifr.ifr_addr.sa_data[5]);

	// inputing source mtu
	if (ioctl(file_descriptor, SIOCGIFMTU, &ifr) == -1) {
		perror("ioctl_mtu");
		close(file_descriptor);
		return 1;
	}
	
	// source mtu
	printf("MTU: %d\n", ifr.ifr_mtu);


	// inputing source flags
	if (ioctl(file_descriptor, SIOCGIFFLAGS, &ifr) == -1) {
		perror("ioctl_flags");
		close(file_descriptor);
		return 1;
	}

	// source flags
	printf("STATUS: %s\nBROADCAST: %s\nLOOPBACK: %s\n",
					(ifr.ifr_flags&IFF_UP) 				? "UP"        : "DOWN",
					(ifr.ifr_flags&IFF_BROADCAST) ? "TRUE" : "FALSE",
					(ifr.ifr_flags&IFF_LOOPBACK)  ? "TRUE" : "FALSE");

	close(file_descriptor);

	return 0;
}
