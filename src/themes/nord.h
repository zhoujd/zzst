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

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#cccccc",
	"#555555",
	"#d8dee9", /* foreground (nord4) */
	"#000000", /* background (black) */
};

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
