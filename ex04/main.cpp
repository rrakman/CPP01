#include<iostream>
#include<fstream>

bool isFileEmpty(const char* filename) {
    std::ifstream file(filename, std::ios::ate);
    return file.tellg() == 0;
}

int main(int ac,char **av)
{
	if(ac == 4)
	{
		std::string input_file(av[1]);
		std::string needle(av[2]);
		std::string toinsert(av[3]);
		std::string str;
		std::string rslt;
		std::ifstream file(av[1]);
		
		if(!file.is_open() || !file.good())
		{
			std::cout<<"encountred an error while opening the file!"<<std::endl;
			return -1;
		}
		if (isFileEmpty(av[1])) {
        	std::cout << "File is empty." << std::endl;
			return -1;
		}
		while(1)
		{
			if(!std::getline(file, str))
				break;
			size_t i = str.find(av[2],0);
			while(i != std::string::npos)
			{
				str.erase(i,needle.length());
				str.insert(i,toinsert);
				i = str.find(av[2], 0);
			}
			if(!file.eof())
				rslt.append(str+'\n');
			else
				rslt.append(str);
		}
		std::string out_file = input_file + ".replace";
		std::ofstream MyFile(out_file.c_str());
		MyFile<<rslt;
		MyFile.close();
	}
	else
	{
		std::cout<<"Error: invalid arguments\nUsage : ./sed filename s1 s2"<<std::endl;
		return -1;
	}
	return 0;
}