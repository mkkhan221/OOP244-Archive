#ifndef SDDS_PAIR_H
#define SDDS_PAIR_H
namespace sdds {
	template <class T , class V>
	class Pair {
		
		T value1;
		V value2;
	public:
		Pair(T val1, V val2);
		int* getMax(T val1, V val2);
	
	};
	template <class T, class V>
	Pair<T, V>::Pair(T val1, V val2) {
		value1 = val1;
		value2 = val2;
	}
	template <class T, class V>
	int* Pair<T,V>::getMax(T val1, V val2) {
		int* v = new int[2]{};
		v[0]= value1 > val1 ? 1 : 0;
		v[1] = value2 > val2 ? 1 : 0;
		return v;
	}
	
}
#endif