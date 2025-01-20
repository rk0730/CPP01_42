#include <iostream>
#include <fstream>
#include <iterator>
#include <cstring>

// ./replace Makefile NA 1234

int main(int argc, char **argv)
{
	if (argc != 4 || strlen(argv[2]) == 0 || strlen(argv[3]) == 0)
	{
		std::cerr << "Usage: " << argv[0] << " <ifilename> <s1> <s2>" << std::endl;
		return (1);
	}
	// 入力ファイルを読み込む
	std::ifstream ifile;
	ifile.open(argv[1]);
	if (!ifile)
	{
		std::cerr << "Error: " << argv[1] << " not found" << std::endl;
		return (1);
	}
	std::string content((std::istreambuf_iterator<char>(ifile)), std::istreambuf_iterator<char>());
	ifile.close();
	// 出力ファイルを作成する
	std::string ofilename = std::string(argv[1]) + ".replace";
	std::ofstream ofile;
	ofile.open(ofilename.c_str());
	if (!ofile)
	{
		std::cerr << "Error: Could not create " << ofilename << std::endl;
		return (1);
	}
	// 出力ファイルに書き込む
	std::string::size_type pos;
	while (1)
	{
		pos = content.find(argv[2]);
		if (pos == std::string::npos)
		{
			ofile << content;
			break;
		}
		ofile << content.substr(0, pos) << argv[3];
		content = content.substr(pos + strlen(argv[2]));
	}
	ofile.close();
	return (0);
}
