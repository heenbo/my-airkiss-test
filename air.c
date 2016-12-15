/*************************************************************************
 *   > File Name: main.c
 *   > Author: heenbo
 *   > Mail: 379667345@qq.com 
 *   > Created Time:  Thu 15 Dec 2016 02:36:48 PM CST
 *   > Modified Time: Thu 15 Dec 2016 02:38:02 PM CST
 ************************************************************************/

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <netinet/in.h>
#include <errno.h>
#include <netdb.h>
#include <signal.h>
#include <pthread.h>

#include <linux/sockios.h>
#include <linux/if.h>
#include <netinet/ip_icmp.h>   //Provides declarations for icmp header
#include <netinet/udp.h>   //Provides declarations for udp header
#include <netinet/tcp.h>   //Provides declarations for tcp header
#include <netinet/ip.h>    //Provides declarations for ip header
#include <netinet/if_ether.h>  //For ETH_P_ALL
#include <net/ethernet.h>  //For ether_header
#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/ioctl.h>
#include <sys/time.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <ifaddrs.h>
#include <stdbool.h>

#include <pcap.h>
#include "airkiss.h"

int main(int argc, char *argv[])
{

	return 0;
}
