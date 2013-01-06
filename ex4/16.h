//struct Stash {
//Исходный текст:
//int size;
//int quantity;
//int next;

//unsigned char* storage;

//void initialize(int size);
//void cleanup();
//int add(const void* element);
//void* fetch(int index);
//int count();
//void inflate(int increase);
//};
#include <vector>

struct Stash {
int size;

std::vector<unsigned char> vStore;

void initialize(int size);
void cleanup();
int add(const void* element);
void* fetch(int index);
int count();
void inflate(int increase);
};
