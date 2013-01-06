class Example
{
	int a;
	void b() {};
	public:
	int c;
	void d() {};
	protected:
	int e;
	void f() {};
};

int main ()
{
	Example ex;
	ex.a = 0;
	ex.b();
	ex.c = 1;
	ex.d();
	ex.e = 2;
	ex.f();
}
