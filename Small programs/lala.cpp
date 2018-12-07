struct types {
	char chr;
	short sht;
	int itg;
	long lng;
	float flt;
	double dbl;
	long double ldb;
	char ptr;
};

types type_sizes() {
	types q;
	q.chr = sizeof(char);
	q.sht = sizeof(short);
	q.itg = sizeof(int);
	q.lng = sizeof(long);
	q.flt = sizeof(float);
	q.dbl = sizeof(double);
	q.ldb = sizeof(long double);
	q.ptr = 8;
	return q;
}

