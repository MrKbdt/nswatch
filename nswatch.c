/*

written by Mark J. Baudot
9/15/21
release v1.0

*/

#include <stdio.h>
#include <process.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

//int main(int argc, const char *argv[])
int main(int argc, const char **argv)
{
   int sleepTime;

   if (argc == 2)
   {
      sleepTime = 2;
   }
   else if (argc == 3)
   {
      sleepTime = atoi(argv[2]);
   }
   else
   {
      system("cls");
      printf("\n\t%s will take up to TWO arguments as follows: \
         \n\n\t%s <hostname | FQDN> <sleep seconds>\
         \n\n\t<sleep seconds> is optional. The default is 2 seconds.\
         \n\n\t**NOTE - if experiencing slow resolve time for an FQDN you have two options.\
         \n\t\t1) increase the sleepTime by a few seconds.\
         \n\t\t\tAND/OR\
         \n\t\t2) use a trailing '.' to speed up the resolver.\
         \n\n\t\te.g. 'nswatch www.google.com. 5' \
         \n\n\tThe above command will resolve quickly and sleep for 5 seconds before looping.\n",
             argv[0], argv[0]);

      exit(0);
   }

   char nsl[30] = "nslookup ";
   strcat(nsl, argv[1]);

   while (1)
   {
      system("cls");
      system("ipconfig /flushdns > nul");
      printf("\nDNS cache flushed!\n");
      printf("\nResolving IP address(es) of host %s\n\n", argv[1]);
      system(nsl);
      printf("\n");
      printf("CTRL-C to terminate.\n");
      sleep(sleepTime);
   }
   return 0;
}
