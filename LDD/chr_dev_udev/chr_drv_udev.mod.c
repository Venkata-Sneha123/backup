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
	{ 0x37a0cba, "kfree" },
	{ 0xb356c301, "class_destroy" },
	{ 0xc38c6801, "device_destroy" },
	{ 0xf5cb25c8, "kmem_cache_alloc_trace" },
	{ 0x35216b26, "kmalloc_caches" },
	{ 0xc79de84d, "device_create" },
	{ 0x8d62ea07, "__class_create" },
	{ 0x78f44845, "cdev_del" },
	{ 0x7afe113a, "cdev_add" },
	{ 0xa3036ef8, "cdev_init" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xe1bf6a21, "cdev_alloc" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x26948d96, "copy_user_enhanced_fast_string" },
	{ 0xafb8c6ff, "copy_user_generic_string" },
	{ 0x72a98fdb, "copy_user_generic_unrolled" },
	{ 0x72e5dc9, "module_refcount" },
	{ 0x1b44c663, "current_task" },
	{ 0xc5850110, "printk" },
	{ 0xbdfb6dbb, "__fentry__" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "CAA494DED76A7F3665E68E3");
