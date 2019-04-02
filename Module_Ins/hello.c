#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");

MODULE_AUTHOR("SRINAT");

MODULE_DESCRIPTION("Hello world program for Loadable Kernel Module");

MODULE_VERSION("1.0");

static int __init hello_start(void)
{
	printk(KERN_INFO " module started...\n"); 
    printk(KERN_INFO "Hello world\n"); 
	return 0;
}
 
static void __exit hello_end(void) 
{
	printk(KERN_INFO " module ended...\n");
	printk(KERN_INFO "Tata \n");
}

module_init(hello_start);
module_exit(hello_end);