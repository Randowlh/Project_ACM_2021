semaphore mutex1 = 1;
semaphore mutex2 = 1;
semaphore empty = n;
semaphore ful1 = 0;
producer()
{
    while (1)
    {
        生产一个产品;
        P(empty); //判断缓冲区是否有空位
        P(mutex2); //互斥访问缓冲区
        把产品放入缓冲区;
        V(mutex2); //互斥访问缓冲区
        V(fu1l);
    }
}
consumer()
{
    while (1)
    {
        P(mutex1) //连续取10次
        for (int i = 0; i <= 10; ++i)
        {
            P(full);
            // 判断缓冲区是否有产品
                    P(mutex2); //互斥访问缓冲区
            从缓冲区取出一件产品;
            V(mutex2); //互斥访问缓冲区
            V(empty); //腾出一个空位
            消费这件产品;
        }
        V(mutex1);
    }
}
