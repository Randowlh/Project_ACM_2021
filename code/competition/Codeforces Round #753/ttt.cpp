semaphore full=0;             
semaphore empty=N;            
semaphore undeal=0;           
semaphore dealed=0;         
semaphore mutex=1;              

main()
{
	cobegin
		R();
		M();
		P();
	coend
}
R()
{
	while (true)
	{
		读一个字符;
		P(empty);
		P(mutex);
		将一个字符送入缓冲区;
		V(mutex);
		V(undeal)
		V(full);
	}
}
M()
{
	while (true)
	{
		P(undeal);
		P(mutex);
		处理字符;
		V(mutex);
		V(dealed);
	}
}
P()
{
	while (true)
	{
		P(full)
		P(dealed);
		P(mutex);
		从缓冲区中取一个字符;
		V(mutex);
		V(empty);
		打印一个字符;
	}
}