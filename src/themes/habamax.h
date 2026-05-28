/* color */

static const char *colorname[] = {
	/* 8 normal colors */
	"#1c1c1c",
	"#af5f5f",
	"#5faf5f",
	"#af875f",
	"#5f87af",
	"#af87af",
	"#5f8787",
	"#9e9e9e",

	/* 8 bright colors */
	"#767676",
	"#d75f87",
	"#87d787",
	"#d7af87",
	"#5fafd7",
	"#d787d7",
	"#87afaf",
	"#bcbcbc",

	[255] = 0,

	/* more colors can be added after 255 to use with DefaultXX */
	"#ffffff", /* cursor background */
	"#000000", /* cursor foreground */
	"#bcbcbc", /* foreground colour */
	"#000000", /* background colour */
};


/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 258;
unsigned int defaultbg = 259;
unsigned int defaultcs = 256;
static unsigned int defaultrcs = 257;
