/*
 * Copyright (c) 2012-2014 Wind River Systems, Inc.
 *
 * SPDX-License-Identifier: Apache-2.0
 */

//#define VERSION_BUILD_INFO

#include <zephyr.h>
#include <sys/printk.h>

void main(void)
{
	printk("Hello World! %s\n", VERSION_BUILD_INFO);
}
