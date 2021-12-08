#include <iostream>
#include <cstring>
#include <queue>
using namespace std;

#define ready 0x01
#define run 0x02spf
#define ts 0x02

typedef struct pcb
{
    int pid;
    int state;
    int time;
    struct pcb *next;
} pcb, *ppcb;

void diaodu1(int a[][2], int n)
{

    queue<pcb> q;
    for (int i = 0; i < n; i++)
    {
        pcb head;
        head.pid = a[i][1];
        head.state = ready;
        head.time = a[i][0];
        q.push(head);
    }
    // q.pop();
    while (!q.empty())
    {
        pcb s;
        s = q.front();

        q.pop();
        s.time = s.time - ts;
        cout << "P0" << s.pid << endl;
        if (s.time > 0)
        {
            q.push(s);
        }
    }
}

bool operator<(pcb a, pcb b)
{
    return a.time > b.time;
}
void diaodu2(int a[][2], int n)
{

    priority_queue<pcb> q;
    for (int i = 0; i < n; i++)
    {
        pcb head;
        head.pid = a[i][1];
        head.state = ready;
        head.time = a[i][0];
        q.push(head);
    }
    // q.pop();
    pcb s1, s2;
    s1 = q.top();
    q.pop();
    s2 = q.top();
    q.pop();
    while (!q.empty())
    {

        while (s1.time > 0)
        {
            s1.time = s1.time - ts;
            cout << "P0" << s1.pid << endl;
            if (s1.time <= 0)
                break;
            s2.time = s2.time - ts;

            cout << "P0" << s2.pid << endl;
        }
        pcb temp;
        temp = s2;
        s2 = q.top();
        s1 = temp;
        q.pop();
    }
    while (s1.time > 0)
    {
        s1.time = s1.time - ts;
        s2.time = s2.time - ts;
        cout << "P0" << s1.pid << endl;
        cout << "P0" << s2.pid << endl;
    }
    while (s2.time > 0)
    {
        s2.time = s2.time - ts;
        cout << "P0" << s2.pid << endl;
    }
}

int main()
{
    string way;
    int n;
    cin >> way >> n;
    int a[n][2];
    for (int i = 0; i < n; i++)
        a[i][1] = i;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i][0];
    }

    if (way == "fcfs" || way == "FCFS")
    {
        cout << way << endl;
        diaodu1(a, n);
    }
    else
    {
        int temp;
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n - 1; j++)
            {
                if (a[j][0] > a[j + 1][0])
                {
                    temp = a[j][0];
                    a[j][0] = a[j + 1][0];
                    a[j + 1][0] = temp;
                    temp = a[j][1];
                    a[j][1] = a[j + 1][1];
                    a[j + 1][1] = temp;
                }
            }
        cout << way << endl;
        diaodu2(a, n);
    }
}
