/*
I believe that my code worked as expected, it resulted in the same output as the example.
If you were to alter the values of NumProducer and NumConsumer it would change how the functions
work. If you had more producers you would be creating more threads and they would be put into 
a buffer. If you reduce the number of producer threads your production rate would decrease.
If you increase the number of consumer threads and the consumption rate would increase, the
opposite would occur if you decreased the number of consumer threads. The consumption rate would
decrease and the you may have an influx of producer threads that would be waiting in the buffer.
If you were to set one of NumProducer or NumConsumer to 0 either the producer would have nothing
consuming it's products, or the consumer would have nothing to consume. 
*/