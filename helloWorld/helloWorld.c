#include <linux/module.h>
#include <linux/init.h>
//#include <linux/kernel.h>

/*Meta Information*/
MODULE_LICENSE("GPL");							// LICENSE IS MENDATORY
MODULE_AUTHOR("shahriar-hasan-mickey");					// AUTHOR IS OPTIONAL
MODULE_DESCRIPTION("A HELLO WORLD LINUX KERNEL MODULE");		// DESCRIPTION IS OPTIONAL



static int __init ModuleInit(void){					// WITHOUT THE STATIC AND __INIT KEYWORD STILL THE CODE WILL COMPILE BUT WITHOUT THE VOID IN THE PARAMETER IN MY CASE I GET ERROR
	printk("Hello World from Kernel\n");
	return 0;
}

static void __exit ModuleExit(void){					// WITHOUT THE STATIC AND __EXIT KEYWORD STILL THE CODE WILL COMPILE BUT WITHOUT THE VOID IN THE PARAMETER IN MY CASE I GET ERROR
	printk("Goodbye from kernel\n");
}

module_init(ModuleInit);
module_exit(ModuleExit);
