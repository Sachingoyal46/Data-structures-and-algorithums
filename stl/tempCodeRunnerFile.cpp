 priority_queue<int>maxpq;
    maxpq.push(78);
    maxpq.push(33);
    maxpq.push(18);
    maxpq.push(93);
    maxpq.push(58);
    maxpq.push(13);

    while(!maxpq.empty())
    {
        cout<<maxpq.top()<<endl;
        maxpq.pop();

    }