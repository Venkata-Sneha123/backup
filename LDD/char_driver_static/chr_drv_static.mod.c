#include <linux/build-salt.h>
#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(.gnu.linkonce.this_module) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section(__versions) = {
	{ 0xb3753869, "module_layout" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x78f44845, "cdev_del" },
	{ 0x7afe113a, "cdev_add" },
	{ 0xa3036ef8, "cdev_init" },
	{ 0xe1bf6a21, "cdev_alloc" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xc5850110, "printk" },
	{ 0x26948d96, "copy_user_enhanced_fast_string" },
	{ 0xafb8c6ff, "copy_user_generic_string" },
	{ 0x72a98fdb, "copy_user_generic_unrolled" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "A689B0B8745FB5AD8042EA1");
