#include<stdio.h>//C++ <cstdio>
#include<string.h>//C++ <cstring>
int	main(void)
{
char	origin[] = "Block\0DMask";//"BlockDMask\0" 이므로, 11의 길이;i
char	dest1[100] = "abcd\0efg";
//case1 : 넉넉한 dest 배열 뒤에 붙여넣는경우    
strcat(dest1, origin);
//case2 : 넉넉하지 않은 dest 배열 뒤에 넘치게 붙여 넣는 경우.    
//strcat(dest2, origin);    //run time error                
printf(" case1 : %s\n", dest1);//ok    
//printf("case2 : %s\n", dest2);//error.
return 0;
}
