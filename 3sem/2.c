//#include <iostream>
#include <stdio.h>

int main(int argc, char const *argv[], char * envp[])
{
	//int n=5;
	printf("%d\n",3); //atoi(argv[1]));
	if (argc >=1){
		execlp("./2","2",atoi(argv[1]),(char*)NULL);
	}
	//if (atoi(argv[1]) != 0){
		//execlp("./2","2",(char*)NULL);
	//}
	return 0;
}