#include <linux/module.h>


static int __init hello_world_init(void) /* Constructor */
{
	printk("Hello world Entry");
    return 0;
}

void __exit hello_world_exit(void)
{
 printk("Hello world Exit");
}

module_init(hello_world_init);
module_exit(hello_world_exit);

