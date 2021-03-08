#include <linux/init.h>
#include <linux/module.h>
#include <linux/kernel.h>

static int __init name(void) {
    printk(KERN_LOG "");
    return 0;
}

static void __exit name(void) {

}

module_init();
module_exit();