#include <pthread.io>
#include <stdio.h>
#include <stdlib.h>
#include <uninstd.h>
#include <string.h>
#include <semaphore.h>

struct Instruction
{
    char operation;
    int intArg;
    string stringArg;
};

struct Cpu
{
    int programCounter;
    int value;
    int timeSlice;
    int timeSliceUsed;
};

enum States
{
  STATE_READY, STATE_RUNNING, STATE_BLOCKED
};

struct PcbEntry
{
    int processId;
    int parentProcessId;
    struct Instruction program;
    unsigned int programCounter_t;
    int value_t;
    unsigned int priority;
    enum States state;
    unsigned int startTime;
    unsigned int timeUsed;
};

struct PcbEntry pcbEntry[10];
unsigned int timestamp = 0;
struct Cpu cpu;

void set(int value)
{ 
    cpu.value = value;
}

void add(int value)
{
    cpu.value += value;
}

void decrement(int value)
{
    cpu.value -= value;
}

void schedule()
{
  
}
    
void block()
{

}

void end()
{

}

void fork(int value)
{

}

void replace(string &argument)
{

}

void quantum()
{

}

void unblock()
{

}

void print()
{

}

int runProcessManager(int fileDescriptor)
{

}
