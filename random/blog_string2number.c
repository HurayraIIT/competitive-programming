	
		/*  Name: Abu Hurayra
    		Handle: HurayraIIT
    		Institute: IIT_JU   */
    
#include <stdio.h>

int main()
{
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif
	


	char str[100] ;

	scanf("%s" , str ) ;

	int s = 0 ;

	for( int i = 0 ; str[i] != '\0' ; i++ )
	{
		s = s * 10 + str[i] - '0' ;
	}

	printf("%d\n" , s ) ;
	
	
	return 0;
}