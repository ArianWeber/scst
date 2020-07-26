#include <linux/module.h>
#include <rdma/rdma_cm.h>

static int __init modinit(void)
{
	return rdma_create_id(NULL, NULL, NULL, 0, 0) != NULL;

}

module_init(modinit);

MODULE_LICENSE("GPL");
