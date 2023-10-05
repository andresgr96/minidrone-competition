@echo off
set MATLAB=C:\Program Files\MATLAB\R2023a
"%MATLAB%\bin\win64\gmake" -f rtwshared.mk  OPTS="-DNRT -DIS_SIM_TARGET"
