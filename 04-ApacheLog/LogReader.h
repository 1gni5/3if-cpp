#if ! defined LOGREADER_H
#define LOGREADER_H

#include <fstream>
#include <sstream>
using namespace std;

const string BASE_URL = "intranet-if.insa-lyon.fr";

string& StripBaseURL(string& url, string base);
string& TrimTrailingSlash(string& url);

typedef struct log {
	string ip;
	string username;
	string authname;
	string date;
	string verb;
	string origin;
	string http_version;
	string ret_code;
	string download_size;	
	string target;
	string user_agent;
	
	inline log(string src)
	{
		stringstream ss(src);
		string tmp;
		
		getline(ss, ip, ' ');
		getline(ss, username, ' ');
		getline(ss, authname, ' ');

		getline(ss, tmp, '[');
		getline(ss, date, ']');
		// date(tmp);

		getline(ss, tmp, '\"');
		getline(ss, verb, ' ');
		getline(ss, origin, ' ');
		TrimTrailingSlash(origin);
	
		getline(ss, http_version, '\"');

		getline(ss, tmp, ' ');
		getline(ss, ret_code, ' ');
	
		getline(ss, download_size, ' ');

		getline(ss, tmp, '\"');
		getline(ss, target, '\"');
		StripBaseURL(target, BASE_URL);
		TrimTrailingSlash(target);

		getline(ss, tmp, ' ');
		getline(ss, user_agent, '\n');
	};

} log;

class LogReader : public ifstream
{

public:
	inline LogReader(string path):
		ifstream(path) {};

	log GetNextLog();	
};

#endif
