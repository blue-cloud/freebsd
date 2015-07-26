/*-
 * Copyright (c) 2014 Ruslan Bukin <br@bsdpad.com>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 *
 * $FreeBSD: releng/10.1/sys/arm/samsung/exynos/chrome_kb.h 266341 2014-05-17 19:37:04Z ian $
 */

void ckb_ec_intr(void *);

struct key {
	uint8_t row;
	uint8_t col;
	uint8_t key;
};

#define	KEYMAP_LEN	75

struct key keymap[KEYMAP_LEN] = {
	{ 0x00, 0x01, 0x7d }, /* lmeta */
	{ 0x00, 0x02, 0x3b }, /* F1 */
	{ 0x00, 0x03, 0x30 }, /* B */
	{ 0x00, 0x04, 0x44 }, /* F10 */
	{ 0x00, 0x06, 0x31 }, /* N */
	{ 0x00, 0x08, 0x0d }, /* = */
	{ 0x00, 0x0a, 0x64 }, /* ralt */

	{ 0x01, 0x01, 0x01 }, /* escape */
	{ 0x01, 0x02, 0x3e }, /* F4 */
	{ 0x01, 0x03, 0x22 }, /* G */
	{ 0x01, 0x04, 0x41 }, /* F7 */
	{ 0x01, 0x06, 0x23 }, /* H */
	{ 0x01, 0x08, 0x28 }, /* ' */
	{ 0x01, 0x09, 0x43 }, /* F9 */
	{ 0x01, 0x0b, 0x0e }, /* backspace */

	{ 0x02, 0x00, 0x1d }, /* lctrl */
	{ 0x02, 0x01, 0x0f }, /* tab */
	{ 0x02, 0x02, 0x3d }, /* F3 */
	{ 0x02, 0x03, 0x14 }, /* t */
	{ 0x02, 0x04, 0x40 }, /* F6 */
	{ 0x02, 0x05, 0x1b }, /* ] */
	{ 0x02, 0x06, 0x15 }, /* y */
	{ 0x02, 0x07, 0x56 }, /* 102nd */
	{ 0x02, 0x08, 0x1a }, /* [ */
	{ 0x02, 0x09, 0x42 }, /* F8 */

	{ 0x03, 0x01, 0x29 }, /* grave */
	{ 0x03, 0x02, 0x3c }, /* F2 */
	{ 0x03, 0x03, 0x06 }, /* 5 */
	{ 0x03, 0x04, 0x3f }, /* F5 */
	{ 0x03, 0x06, 0x07 }, /* 6 */
	{ 0x03, 0x08, 0x0c }, /* - */
	{ 0x03, 0x0b, 0x2b }, /* \ */

	{ 0x04, 0x00, 0x61 }, /* rctrl */
	{ 0x04, 0x01, 0x1e }, /* a */
	{ 0x04, 0x02, 0x20 }, /* d */
	{ 0x04, 0x03, 0x21 }, /* f */
	{ 0x04, 0x04, 0x1f }, /* s */
	{ 0x04, 0x05, 0x25 }, /* k */
	{ 0x04, 0x06, 0x24 }, /* j */
	{ 0x04, 0x08, 0x27 }, /* ; */
	{ 0x04, 0x09, 0x26 }, /* l */
	{ 0x04, 0x0a, 0x2b }, /* \ */
	{ 0x04, 0x0b, 0x1c }, /* enter */

	{ 0x05, 0x01, 0x2c }, /* z */
	{ 0x05, 0x02, 0x2e }, /* c */
	{ 0x05, 0x03, 0x2f }, /* v */
	{ 0x05, 0x04, 0x2d }, /* x */
	{ 0x05, 0x05, 0x33 }, /* , */
	{ 0x05, 0x06, 0x32 }, /* m */
	{ 0x05, 0x07, 0x2a }, /* lsh */
	{ 0x05, 0x08, 0x35 }, /* / */
	{ 0x05, 0x09, 0x34 }, /* . */
	{ 0x05, 0x0B, 0x39 }, /* space */

	{ 0x06, 0x01, 0x02 }, /* 1 */
	{ 0x06, 0x02, 0x04 }, /* 3 */
	{ 0x06, 0x03, 0x05 }, /* 4 */
	{ 0x06, 0x04, 0x03 }, /* 2 */
	{ 0x06, 0x05, 0x09 }, /* 8 */
	{ 0x06, 0x06, 0x08 }, /* 7 */
	{ 0x06, 0x08, 0x0b }, /* 0 */
	{ 0x06, 0x09, 0x0a }, /* 9 */
	{ 0x06, 0x0a, 0x38 }, /* lalt */
	{ 0x06, 0x0b, 0x64 }, /* down */
	{ 0x06, 0x0c, 0x62 }, /* right */

	{ 0x07, 0x01, 0x10 }, /* q */
	{ 0x07, 0x02, 0x12 }, /* e */
	{ 0x07, 0x03, 0x13 }, /* r */
	{ 0x07, 0x04, 0x11 }, /* w */
	{ 0x07, 0x05, 0x17 }, /* i */
	{ 0x07, 0x06, 0x16 }, /* u */
	{ 0x07, 0x07, 0x36 }, /* rsh */
	{ 0x07, 0x08, 0x19 }, /* p */
	{ 0x07, 0x09, 0x18 }, /* o */
	{ 0x07, 0x0b, 0x5F }, /* up */
	{ 0x07, 0x0c, 0x61 }, /* left */
};
