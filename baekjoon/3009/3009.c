#include <stdio.h>
int main(void){
	int xpos[3], ypos[3];
	int x, y;

	for(int i = 0; i < 3; i++){
		scanf("%d %d", &xpos[i], &ypos[i]);
	}
	x = xpos[0]; y = ypos[0];
	if( x == xpos[1] ) x = xpos[2];
	else if( x == xpos[2]) x = xpos[1];
	if( y == ypos[1] ) y = ypos[2];
	else if (y == ypos[2]) y = ypos[1];
	printf("%d %d", x, y);
	return 0;
}