#include <stdio.h>
#include <net/if.h>

#define BANNER(status) \
	 printf("----------------------------- %s ------------------------------------\n", status)

#define INT_BANNER(num) \
	 printf("--------------------------------- interface: %d -----------------------------------------\n", num)

#define CLEAN_BANNER \
	 printf("-----------------------------------------------------------------------------------------\n")

int main(void) {
	char develop[IFNAMSIZ] = "enp0s31f6";
	char buffer[IF_NAMESIZE];
	unsigned int num;

	BANNER("gived-index-from-name");

	// get interface index
	num = if_nametoindex(develop);	

	// check returned value
	if (num == 0) {
		perror("if_nametoindex");
		return 1;
	}	

	// ouptut interface index given from name
	printf("interface_index: %d\n", num);

	BANNER("gived-name-from-index");

	// get interface nume
	if (if_indextoname(num, buffer) == NULL) {
		perror("if_indextoname");
		return 1;
	}

	// output name given form index	
	printf("interface_name: %s\n", buffer);

	// initial interface structure
	struct if_nameindex *interface = if_nameindex();
	
	// check interface struct is empty	
	if (interface == NULL) {
		perror("if_nameindex");
		return 1;	
	}

	// see all interfaces
	struct if_nameindex *iface = interface;
	
	while (iface -> if_index != 0 && iface -> if_name != NULL) {
		
		INT_BANNER(iface -> if_index);

		printf("interface_index: %u\ninterface_name: %s\n",
						iface -> if_index,
						iface -> if_name);

		iface++;	
	}

	CLEAN_BANNER;	
	
	// free interface structure	
	if_freenameindex(interface);
	
	return 0;
}
