/*
 * nord.h
 * https://www.nordtheme.com/
 */

static const char *colorname[] = {
	/* 8 normal colors */
	"#3b4252", /* black   (nord1) */
	"#bf616a", /* red     (nord11) */
	"#a3be8c", /* green   (nord14) */
	"#ebcb8b", /* yellow  (nord13) */
	"#81a1c1", /* blue    (nord9) */
	"#b48ead", /* magenta (nord15) */
	"#88c0d0", /* cyan    (nord8) */
	"#e5e9f0", /* white   (nord5) */

	/* 8 bright colors */
	"#4c566a", /* black   (nord3) */
	"#bf616a", /* red     (nord11) */
	"#a3be8c", /* green   (nord14) */
	"#ebcb8b", /* yellow  (nord13) */
	"#81a1c1", /* blue    (nord9) */
	"#b48ead", /* magenta (nord15) */
	"#8fbcbb", /* cyan    (nord7) */
	"#eceff4", /* white   (nord6) */

	[256] = "#d8dee9", /* default foreground colour */
	[257] = "#000000", /* default background colour */
	[258] = "#cccccc",
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 256;
unsigned int defaultbg = 257;
unsigned int defaultcs = 258;
static unsigned int defaultrcs = 258;
