# nswatch
dns cache clear &amp; name server lookup loop

this utility is written for Windows 10 / Windows Server operating systems.
When run at the command line it will continually loop executing the following functions:
  
  1) ipconfig /flushdns - which clears the name server cache on the local maching.
  2) nslookup <FQDN | HOSTNAME> <sleep seconds>
  

nslookup.exe will take up to TWO arguments as follows: 
         <hostname | FQDN> <sleep seconds>
              <sleep seconds> is optional. The default is 2 seconds.
              **NOTE - if experiencing slow resolve time for an FQDN you have two options.
                1) increase the sleepTime by a few seconds.
                  AND/OR
                2) use a trailing '.' to speed up the resolver.
                
                e.g. nswatch www.google.com. 5
                
                The above command will resolve quickly and sleep for 5 seconds before looping.
