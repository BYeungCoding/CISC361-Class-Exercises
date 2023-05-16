/*Strictly based on the average waiting time and turnaround time for the processes it seems as 
if the round robin style of scheduling is better than the first come first serve type of 
scheduling. I think that if the burst times for the processes are very small first come first 
serve can be better than round robin, but in general it is worse than round robin when handling
multiple processes. If the burst times are shorter than the time quantum for the round robin
algorithm then you would probably be best just switching to another process. Since that is 
essentially what the round robin algorithm does, having it be shorter than the time quantum
really shouldn't be a problem.