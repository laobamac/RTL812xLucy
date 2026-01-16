//
//  RTL812xLucy.c
//  RTL812xLucy
//
//  Created by Laura Müller on 16.01.26.
//

#include <mach/mach_types.h>

kern_return_t RTL812xLucy_start(kmod_info_t * ki, void *d);
kern_return_t RTL812xLucy_stop(kmod_info_t *ki, void *d);

kern_return_t RTL812xLucy_start(kmod_info_t * ki, void *d)
{
    return KERN_SUCCESS;
}

kern_return_t RTL812xLucy_stop(kmod_info_t *ki, void *d)
{
    return KERN_SUCCESS;
}
