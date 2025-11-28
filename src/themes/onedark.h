/* color */

static const char *colorname[] = {
	/* 8 normal colors */
	[0] = "#1e2127", 				/* black */
	[1] = "#e06c75",				/* red */
	[2] = "#98c379",				/* green */
	[3] = "#d19a66",				/* yellow */
	[4] = "#61afef",				/* blue */
	[5] = "#c678dd",				/* magenta */
	[6] = "#56b6c2",				/* cyan */
	[7] = "#abb2bf",				/* white */

	/* 8 bright colors */
	[8] = "#5c6370",				/* black */
	[9] = "#e06c75",				/* red */
	[10] = "#98c379",				/* green */
	[11] = "#d19a66",				/* yellow */
	[12] = "#61afef",				/* blue */
	[13] = "#c678dd",				/* magenta */
	[14] = "#56b6c2",				/* cyan */
	[15] = "#ffffff",				/* white */

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#cccccc",
	"#555555",
	"#ebdbb2", /* default foreground colour */
	"#000000", /* default background colour */
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
