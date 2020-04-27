#include "LinkedQueue.h"

void main()
{
	LinkedQueue que;
	for( int i=1 ; i<10 ; i++ )
		que.enqueue( new Node(i) );
	que.display();
	delete que.dequeue();
	delete que.dequeue();
	delete que.dequeue();
	que.display();
}
