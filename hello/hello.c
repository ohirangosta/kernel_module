#include <linux/module.h>

MODULE_LICENSE("Dual BSD/GPL");

static int __init hello_module_init(void)
{
	printk(KERN_INFO "hello_module is loaded\n");
	return 0;
}

static void __exit hello_module_exit(void)
{
	printk(KERN_INFO "hello_module is removed\n");
}

module_init(hello_module_init);
module_exit(hello_module_exit);
