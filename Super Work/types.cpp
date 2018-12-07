struct Time {
	int hours;
	int minutes;
	int seconds;
	int milliseconds;
};

Time GetTime(const char * str) {
	types q;
	q.hours = (str[0]-'0')*10+(str[1]-'0');
	q.minutes = (str[3]-'0')*10+(str[4]-'0');
	q.seconds = (str[6]-'0')*10+(str[7]-'0');
	q.milliseconds = (str[9]-'0')*100+(str[10]-'0')*10+(str[11]-'0');
	return q;
}

