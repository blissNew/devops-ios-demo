#!/usr/bin/env bash

echo "-----------------------ifconfig-------------------------"
ifconfig
echo "-------------------system_profiler SPHardwareDataType----------------------"
system_profiler SPHardwareDataType
echo "-------------------system_profiler SPEthernetDataType----------------------"
system_profiler SPEthernetDataType
echo "-------------------system_profiler SPMemoryDataType----------------------"
system_profiler SPMemoryDataType
echo "-------------------system_profiler SPStorageDataType----------------------"
system_profiler SPStorageDataType