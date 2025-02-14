

#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>
#include  <linux/hash.h> 
#include <linux/gcd.h>
#include <asm/param.h>
#include <linux/jiffies.h>
 

int simple_init(void)
{
   printk(KERN_INFO "Loading Kernel Module\n");
   printk(KERN_INFO "Golden Ratio Prime is: %lu\n", GOLDEN_RATIO_PRIME);
   printk(KERN_INFO "Current jiffies: %lu\n", jiffies);
   printk(KERN_INFO "HZ value: %d\n", HZ);
 
   return 0;
}
 
unsigned long gcd(unsigned long a, unsigned long b) {
    if (b == 0) {
        return a;  
    } else {
        return gcd(b, a % b);  
    }
}

void simple_exit(void)
{
   printk(KERN_INFO "Removing Kernel Module\n");
   unsigned long result = gcd(3300, 24);
   printk(KERN_INFO "GCD of 3300 & 24 is: %lu\n", result);
   printk(KERN_INFO "Current jiffies: %lu\n", jiffies);
   
}
 
module_init(simple_init);
module_exit(simple_exit);
 
MODULE_LICENSE("IDK");
MODULE_DESCRIPTION("Simple Module");
MODULE_AUTHOR("MOLLY");
