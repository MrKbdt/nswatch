# nswatch
dns cache clear &amp; name server lookup loop

this utility is written for Windows 10 / Windows Server operating systems.
When run at the command line it will continually loop executing the following functions:
  1) ipconfig /flushdns - which clears the name server cache on the local maching.
  2) nslookup <FQDN | HOSTNAME>
  3) 
