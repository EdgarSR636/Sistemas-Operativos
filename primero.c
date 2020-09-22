/*pid_t = int GNU C es la variable que contiene el process id
getpid() = Obtiene el ID del proceso actual
getppid() = Obtiene el ID del padre del proceso actual
fork()
	si sale bien
		El proceso padre: Nos va regresar el proceso del hijo.
		El hijo nos va regresar un 0
	si falla:
		El proceso padre me regresa un -1
		El hijo no se crea.
*/
#include<unistd.h>
#include<stdio.h>
int main (void){

pid_t procid;
printf("My current process id is %d \n", getpid());
procid = fork();
printf("Fork ID %d \n", procid);
printf("Calling fork %d \n", getppid());

return 0;
}
