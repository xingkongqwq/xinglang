// powered by xinglang
#include "xinglang.h"
using namespace std;
int main(int argc, char *argv[])
{
  /*
  Constant definition area
  You don't have to change it. 
(unless you want to translate the information printed in Xinglang into another language that Xinglang does not support, in this case, please change it as appropriate, thank you :) )
  */
  COPYRIGHT = "\
Xinglang programming language, created by xingkong alone\n\
Copyright (C) 2022 xingkong\n\
This program is free software: you can redistribute it and/or modify\n\
it under the terms of the GNU Affero General Public License as\n\
published by the Free Software Foundation, either version 3 of the\n\
License, or (at your option) any later version.\n\
This program is distributed in the hope that it will be useful,\n\
but WITHOUT ANY WARRANTY; without even the implied warranty of\n\
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the\n\
GNU Affero General Public License for more details.\n\
You should have received a copy of the GNU Affero General Public License\n\
along with this program.  If not, see <https://www.gnu.org/licenses/>.\n\
";
  NEED_INPUT_STRING = "The complier need a input (one file path) ";
  regex VAR_MATCHING(
    "^var(?:\\s)+(\\D|[^\\u4e00-\\u9fa5])(?:\\s)*=(?:\\s)*([^\\u4e00-\\u9fa5])"
  );
  auto console = spdlog::stdout_color_mt("console");
  // Constant definition area end
  console->info(COPYRIGHT);
  if(argc == 1){
	 console->error(NEED_INPUT_STRING);
	 return -1;
  }
  char *filePath = argv[1];
  ifstream file;
  file.open(filePath,ios::in);
  if(!file.is_open())
       return 0;
       std::string strLine;
       while(getline(file,strLine))
       {
            if(strLine.empty())
                continue;
			string &str = strLine;
            sregex_iterator pos(str.cbegin(), str.cend(), VAR_MATCHING);
            sregex_iterator end;
            for(; pos!=end; ++pos)
            {
             cout << "0   " << pos->str(0) << endl;
             cout << "1   " << pos->str(1) << endl;
             cout << "2   " << pos->str(2) << endl;
             cout << endl;
            }
       }
}
