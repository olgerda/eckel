class Example
{
	int i;
	
	public:
	Example(int a)
	{
		i = a;
	}
};

int main()
{
//	Example e; //Нет конструктора по умолчанию
	Example e(0);
}
