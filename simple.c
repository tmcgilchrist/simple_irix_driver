#include <sys/types.h>
#include <sys/param.h>
#include <sys/systm.h>
#include <sys/sysmacros.h>
#include <sys/ddi.h>

/*
 * Module version information, required for loadable modules.
 */

#include <sys/mload.h>

char *sim_mversion = M_VERSION;

/*
 * Device-Related Constants and Structures
 */

int sim_devflag = D_MP;

/* ==================================================================
 *    FUNCTION TABLE OF CONTENTS
 * ==================================================================
 */

void sim_init(void);
int sim_unload(void);
int sim_reg(void);
int sim_unreg(void);
int sim_open(dev_t devp, int oflag, int otyp, struct cred crp);
int sim_close(dev_t dev, int oflag, int otyp, struct cred crp);

/*
 * For Irix6.4 compatability only, do nothing here.
 */

void sim_init(void)
{
   printf("sim_init()\n");
}

/*
 * Called by the kernel when the driver is loaded.
 * Here you'd do things like setup per device data and
 * register this driver for the hardware.
 */
int sim_reg(void)
{
    printf("sim_reg()\n");
    return 0;
}

/*
 * Unloads the driver.
 */
int sim_unload(void)
{
    printf("sim_unload()\n");
    return 0;
}

/*
 * Unregisters the driver.
 */
int sim_unreg(void)
{
    printf("sim_unreg()\n");
    return 0;
}

/*
 * Opens the driver.
 */
int sim_open(dev_t devp, int oflag, int otyp, struct cred crp)
{
    printf("sim_open()\n");
    return 0;
}

/*
 * Closes the driver.
 */
int sim_close(dev_t dev, int oflag, int otyp, struct cred crp)
{
    printf("sim_close()\n");
    return 0;
}
