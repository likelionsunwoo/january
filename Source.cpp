#include<stdio.h>
#include<iostream>
#include<fstream>
struct Vector3D
{
	int x;
	int y;
	int z;

	Vector3D(const int& _x, const int& _y, const int& _z)
		:x(_x), y(_y), z(_z)
	{}
	void printVector()
	{
		printf("%d %d %d\n", x,y,z);
	}
};

std::ostream& operator << (std::ostream &stream, Vector3D obj)
{
	stream << obj.x << " " << obj.y << " " << obj.z<<std::endl;
	return stream;
}

void main()
{
	
	Vector3D my_vector(4,5,6);
	//my_vector.printVector();
	
	/*std::cout << my_vector.x << " " << my_vector.y << " " << my_vector.z << std::endl;*/
	
	//using namespace myspace;
	//a = 3;
	//printA();
	
	//printf("Hello, world");
	//using namespace std;
	/*std::cout << "Hello, World!" << std::endl;*/
	std::cout << my_vector << std::endl;
	std::ofstream outputfile("cppstyle.txt");
	outputfile << my_vector << "wtf!!!" <<std::endl;
	
	
}