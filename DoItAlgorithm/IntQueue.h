#ifndef ___IntQueue
#define ___IntQueue

typedef struct {
	int max;
	int num;
	int front;
	int rear;
	int* que;
} IntQueue;

int InitializeQueue(IntQueue* q, int max);

int Enque(IntQueue* q, int x);
int FrontEnque(IntQueue* q, int x);

int Deque(IntQueue* q, int* x);
int RearDeque(IntQueue* q, int* x);

int PeekQueue(const IntQueue* q, int* x);

void ClearQueue(IntQueue* q);

int CapacityQueue(const IntQueue* q);

int SizeQueue(const IntQueue* q);

int IsEmptyQueue(const IntQueue* q);

int IsFullQueue(const IntQueue* q);

int SearchQueue(const IntQueue* q, int x);
int SearchQueue2(const IntQueue* q, int x);

void PrintQueue(const IntQueue* q);

void TerminateQueue(IntQueue* q);

#endif