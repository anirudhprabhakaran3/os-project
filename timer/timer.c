#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include <asm/param.h>
#include <linux/jiffies.h>
#include <asm-generic/div64.h>

int frequency = 0;
int init_jiffies = 0;

int simple_init(void) {
    printk(KERN_INFO "Adding module.\n");
    printk(KERN_INFO "Value of HZ: %d\n", HZ);
    frequency = HZ;
    printk(KERN_INFO "Initial jiffies: %lu\n", jiffies);
    init_jiffies = jiffies;

    return 0;
}

void simple_exit(void) {
    printk(KERN_INFO "Final jiffies: %lu\n", jiffies);
    printk(KERN_INFO "Elapsed time: %lu\n", jiffies - init_jiffies);
}

module_init(simple_init);
module_exit(simple_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Simple Module");
MODULE_AUTHOR("Anirudh Prabhakaran");