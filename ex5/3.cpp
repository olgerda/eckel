class Example
{
	int a;
	
	friend void modify (Example* ex, int val);
};

void modify (Example* ex, int val)
{
	ex->a = val;
}

int main ()
{
	Example ex;
	modify (&ex, 5);
}
