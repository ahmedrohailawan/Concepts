import subprocess
import re
import numpy as np

print("\nstarted...")
# it will execute ping command in shell and return responses as byte objects
response = subprocess.check_output("ping -n 4  www.google.com" ,shell=True) 

# extracting times from ping responses
times = re.findall(r"time=([\d]+)ms",str(response))

# how many packets losts and recieved
packets_lost = list(map(int,re.findall(r"Lost = ([\d]+)",str(response))))
packets_recieved = list(map(int,re.findall(r"Received = ([\d]+)",str(response))))
print("Packets_Losts = ",packets_lost[0])
print("Packets_Recieved = ",packets_recieved[0])

# array in string form
times_array = np.array(times,dtype=str)

# converting array into integer form 
int_times = list(map(int, times_array)) 

# printing final time array 
print(int_times)


