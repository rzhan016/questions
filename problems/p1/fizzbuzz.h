#include <string>
#include <sstream>

static std::string fizzbuzz()
{
	std::stringstream convert;
	for(int i=0; i<=100; i++)
	{
		convert << i << " ";
		if((i%3)==0 && (i%5)!=0)
		    convert << "Fizz ";
		if((i%3)!=0 && (i%5)==0)
		    convert << "Buzz ";
		if((i%3)==0 && (i%5)==0)
		    convert << "FizzBuzz ";
	}
	return convert.str();
}
