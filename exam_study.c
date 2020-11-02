#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int i = 10;
    int *pi = &i;
    int v;
    printf("%d %d\n", i, pi);

    v = (*pi)++;
    // pi가 가리키는 값을 v에 할당함. v = 10, pi가 가리키는 값을 후위증가
    printf("%d %d %d\n", i, pi, v); // 가리키는 값만 증가시킴

/*    v = *pi++;
      // 후위증가를 시킴 v에 pi의 값을 대입시킴 pi의 주소를 증가시킴
    printf("%d %d %d\n", i, pi, v); // 주소값 증가시킴
*/
/*    v = ++*pi;
    // *pi의 값을 증가 시킨 후에 v에 대입
    printf("%d %d %d\n", i, pi, v); // pi가 가리키고 있는 값을 증가시킨 후 그 값을 v에 대입한다.
*/
/*    v = *++pi;
    // pi의 주소값을 증가시킨 후 pi가 가리키고 있는 값을 v에 대입
    printf("%d %d %d\n", i, pi, v); // pi의 주소값을 증가 시키고 p가 가리키는 값을 v에 대입한다. 근데 여기서는 배열이 아니기 때문에 그 다음 주소에 쓰레기값이 들어있으므로 쓰레기값 출력
*/
    

    return 0;
    
}