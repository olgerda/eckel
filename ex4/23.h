#ifndef STASHSTACK
#define STASHSTACK

struct StashStack
{
	void push (const char*);
	void pop ();
	void initialize();
	void cleanup();	
};

#endif
