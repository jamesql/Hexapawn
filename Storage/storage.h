#include <map>
#include <iostream>

using namespace std;

namespace Utility
{

	class Storage
	{
	private:
		std::map<char*, char*> strList;
	public:
		Storage() { }
		
		// Remake these to switches; Or try again to make them store pointers and deref the pointers to typecast the object.
		template<class T>
		T Store(char* k,T v)
		{
			if (std::is_same<T, char*>::value) { strList[k] = v; }
			return v;
		}

		template<class T>
		T Read(char* k)
		{
			T n;
			if (std::is_same<T, char*>::value) { return strList[k]; }
				else return n;
		}

		template<class T>
		T Modify(char* k, T v)
		{
			T n;
			return n;
		}
	};

}
