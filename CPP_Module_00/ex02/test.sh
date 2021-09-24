#!/bin/bash

# colored output
RED='\033[0;31m'
NC='\033[0m'
# 

echo -e $RED"compiling..."$NC
make
Year=`date +%Y`
Month=`date +%m`
Day=`date +%d`
Hour=`date +%H`
Minute=`date +%M`
Second=`date +%S`
Name="$Year$Month$Day""_""$Hour$Minute$Second"
echo -e $RED"creating log file..."$NC
./test > $Name.log
cat $Name.log
