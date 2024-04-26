0x10. Python - Network  0

This directory contains several Bash scripts and a Python script related to making HTTP
requests and processing HTTP responses. These scripts are part of the "Python - Network  0" project at Holberton School.



  Description

The purpose of these scripts is to interact with web servers 
using cURL and Python, performing tasks such as sending HTTP requests, 
receiving HTTP responses, and processing the data accordingly.

  Files

   0-body_size.sh`: Bash script to retrieve the size of the response body from a given URL using cURL.
   1-body.sh`: Bash script to display the body of the response from a given URL using cURL.
   2-delete.sh`: Bash script to send a DELETE request to a given URL using cURL.
   3-methods.sh`: Bash script to display the available HTTP methods for a given URL using cURL.
   4-header.sh`: Bash script to send a GET request to a given URL with a custom header using cURL.
   5-post_params.sh`: Bash script to send a POST request to a given URL with specific parameters using cURL.
   6-peak.py`: Python script that contains a function to find a peak in a list of unsorted integers.
   6-peak.txt`: Text file containing the complexity of the peak-finding algorithm implemented in  6-peak.py`.

  Usage

Each script can be executed in a terminal by running `./script_name.sh  or  python3 script_name.py`, depending on the script's language.

For example:

 bash
./0-body_size.sh 0.0.0.0:5000
 

This would display the size of the response body from the URL  0.0.0.0:5000`.

  Tasks

 0-body_size.sh

This script retrieves the size of the response body from a given URL using cURL.

Usage:
 bash
./0-body_size.sh <URL>
 

 1-body.sh

This script displays the body of the response from a given URL using cURL.

Usage:
 bash
./1-body.sh <URL>
 

 2-delete.sh

This script sends a DELETE request to a given URL using cURL.

Usage:
 bash
./2-delete.sh <URL>
 

 3-methods.sh

This script displays the available HTTP methods for a given URL using cURL.

Usage:
 bash
./3-methods.sh <URL>
 

 4-header.sh

This script sends a GET request to a given URL with a custom header using cURL.

Usage:
 bash
./4-header.sh <URL>
 

 5-post_params.sh

This script sends a POST request to a given URL with specific parameters using cURL.

Usage:
 bash
./5-post_params.sh <URL>
 

 6-peak.py

This Python script contains a function to find a peak in a list of unsorted integers.

Usage:
 python
from 6-peak import find_peak

print(find_peak([1, 2, 4, 6, 3]))
 

 6-peak.txt

This text file contains the complexity of the peak-finding algorithm implemented in  6-peak.py`. 

  Author
KAYODE ANTHONY DARAMOLA