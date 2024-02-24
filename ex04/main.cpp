#include<iostream>
#include<fstream>

int main(int ac,char **av)
{
	if(ac == 4)
	{
		std::string input_file(av[1]);
		std::ifstream file(av[1]);
		std::string str;

		if(!file.is_open() && !file.good())
		{
			std::cout<<"encountred an error while opening the file!"<<std::endl;
			return -1;
		}
		if(std::getline(file, str,'\0'))
		{
			size_t i = str.find(av[2],0);
			std::string needle(av[2]);
			std::string toinsert(av[3]);
			if(i != std::string::npos)
			{
				str.erase(i,needle.length());
				str.insert(i,toinsert);
			}
			std::ofstream MyFile(input_file + ".replace");
			MyFile<<str;
			MyFile.close();
		}
		else
			std::cout<<"Error, File is Empty"<<std::endl;
	}
	else
	{
		std::cout<<"Error: invalid arguments\nUsage : ./sed filename s1 s2"<<std::endl;
		return -1;
	}
	return 0;
}