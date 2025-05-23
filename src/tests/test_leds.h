/*
 * Copyright (c) 2023, Erich Styger
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef _TEST_LEDS_H_
#define _TEST_LEDS_H_

#ifdef __cplusplus
extern "C" {
#endif

/*!
 * \brief Test the on/off state of the led
 */
void TestLeds_OnOff(void);

/*!
 * \brief Test toggling the leds
 */
void TestLeds_Toggle(void);

#ifdef __cplusplus
}  /* extern "C" */
#endif

#endif /* _TEST_LEDS_H_ */
