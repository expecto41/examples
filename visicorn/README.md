# Example programs for visicorn

## Many read

We expect the graph to have:
- some unique patterns at the start (starting).
- a lot of repeating patterns for most of the program (lseek/read)
- some unique patterns at the end (closing file/terminating task).

[see code](many_read.c)

## Many read one stat

It should looks like many read, but with some unique patterns in the middle (stat).

[see code](many_read_one_stat.c)

## Many read socket thing

Same as above, but should have a larger anomaly in the middle (socket: create, connect, send, recv).

[see code](many_read_socket_things.c)

## Histogram

We assume that all "phase" will correspond to a group of "buckets" in the histogram.

We expect to see the "buckets" corresponding to the "starting" phase to decay during the life time, the other phase may not have time to significantly do so.
