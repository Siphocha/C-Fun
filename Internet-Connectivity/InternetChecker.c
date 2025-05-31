#include <stdio.h>
#include <stdlib.h> //Needed to interact with the system

#def _WIN32
    // Pinging googles IP address to see if we work
    #define PING_COMMAND "ping -n 1 -w 1000 8.8.4.4 > nul"

int main() {
    int result;
    printf("Checking internet cconnect using ping...\n");

    result = system(PING_COMMAND);

    //Check the return value of the ping sent
    if (result == 0) {
        //Returning 0 for ping is a common convention,
        printf("Ping is successful, device connected to internet\n");
    } else {
        printf("Device not connected\n");
        printf("System value return %d\n", result);    /
    }

    return 0;
}