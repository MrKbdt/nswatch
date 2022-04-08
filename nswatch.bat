rem written by Mark Baudot
rem 9/14/21
rem this was the original idea which led to the C version

@echo off

set /a "x = 1"
set /a "y = 2"

:loop1
cls
if "%1"=="" goto :usage
if %x% leq %y% (
	cls
	ipconfig /flushdns 
	echo. 
	nslookup %1
	echo.
	echo Press any key to refresh... CTRL-C to terminate
	echo.
	timeout /T 3 > nul
	goto :loop1
)

:usage
echo.
echo USAGE: nswatch ^<hostname ^| FQDN^>
