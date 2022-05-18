# nswatch
Local DNS cache clear and name server lookup loop for Windows.

This utility is written for Windows 10 / Windows Server operating systems.
Handy while waiting for a DNS update to propagate.
When run at the command line it will continually loop executing the following commands:
  
  1) ipconfig /flushdns - which clears the name server cache on the local maching.
  2) nslookup <FQDN | hostname>
  
nswatch.exe will take up to TWO arguments as follows: 

nswatch [FQDN | hostname] [pauseSeconds]

note: [pauseSeconds] is an optional parameter. The default is 2 seconds.
    
**NOTE - if experiencing slow resolve time for an FQDN you have two options.
        1) use a trailing '.' to speed up the resolver.
        AND/OR
        2) increase the sleepTime by a few seconds.
        
        nswatch www.google.com. 5
