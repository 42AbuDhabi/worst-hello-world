@echo off
@cls

choice /c 0123456789 /n /m "Enter a number from 0 to 9:"
set num=%errorlevel%
set hw=Hello World
set count=0


:loop
cls
set /a rnd=%random% %%10 +1
set /a count=%count%+1
if %rnd% equ %num% goto yes
if %rnd% neq %num% goto no

:no
goto :loop

:yes
cls
echo.
echo It took %count% attempts to %hw%
echo.

pause >nul