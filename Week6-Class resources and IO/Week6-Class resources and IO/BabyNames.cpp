#include "BabyNames.h"
using namespace std;
namespace sdds_books {
	BabyNames::BabyNames(BabyNames& n) {
		
		if (n.namecount != 0) {
			char* fn{};
			for (int i = 0; i < n.namecount; i++) {
				n.names[i].getName(fn);
				names[i].set(fn, n.names[i].getLength());
			}
		}
		namecount = n.namecount;
	
	}
	BabyNames::BabyNames(const char *bn, int l) {
		if (bn == nullptr) {
			BabyNames();
		}
		else {
			names[0].set(bn, l);
			namecount += namecount;
		}
		
	}
	BabyNames::BabyNames() {
		for (int i = 0; i < sdds_books::Max_Count; i++)
		{
			names[i].set(nullptr, 0);
		}
		namecount = 0;
	}
	int BabyNames::getNameCount() {
		return namecount;
	}
}