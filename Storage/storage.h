#include <map>

namespace Utility
{

	class Storage
	{
	public:
		Storage() { }

		template<class T>
		T* Store(std::string k,T v)
		{
			T* a = &v;
			pList.insert( std::pair<std::string, T*> (k,a) );
			return a;	
		}

		template<class T>
		T Read(std::string k) 
		{
			T* a = pList[k];
			return *a;	
		}
	
	private:
		static map<std::string, std::any> pList;
	}

}
