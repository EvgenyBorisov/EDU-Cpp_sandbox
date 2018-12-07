typedef struct types {
	char chr;
	short sht;
	int itg;
	long lng;
	float flt;
	double dbl;
	long double ldb;
	char *ptr;
} types;

types type_sizes(void) {
	types q;
	q.chr = (char)sizeof(char);
	q.sht = (short)sizeof(short);
	q.itg = (int)sizeof(int);
	q.lng = (long)sizeof(long);
	q.flt = (float)sizeof(float);
	q.dbl = (double)sizeof(double);
	q.ldb = (long double)sizeof(long double);
	q.ptr = (char *)sizeof(char *);
	return q;
}
