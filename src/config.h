
static const unsigned long background = 0x202428;

#ifdef module_desktop
static const unsigned long space_norm = 0x384246;
static const unsigned long space_used = 0x9498A2;
static const unsigned long space_curr = 0x94BBD1;
static Desktop desk[] = {
	/*0,  x, y, w, h */
	{ 0,	2,	2,	5,	5 },
	{ 0,	9,	2,	5,	5 },
	{ 0,	2,	9,	5,	5 },
	{ 0,	9,	9,	5,	5 },
};
#endif /* module_desktop */


#ifdef module_mail
static MBox box[] = {
	/* path to maildir,                    color,    0 */
	{"/home/jmcclure/mail/umass/INBOX/new", 0x94BBD1, 0},
	{"/home/jmcclure/mail/mccluresk9/INBOX/new", 0x9498A2, 0},
	/* keep a null terminator */
	{NULL, 0, 0},
};
// 16x16 outline icon
//static const XPoint mail_icon_size = { 16, 16 };
//static const char mail_icon_data[] = {
	//0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x7F,
	//0x06, 0x60, 0x0A, 0x50, 0x12, 0x48, 0x22, 0x44,
	//0x42, 0x42, 0xA2, 0x45, 0x12, 0x48, 0x0A, 0x50,
	//0x06, 0x60, 0xFE, 0x7F, 0x00, 0x00, 0x00, 0x00,
//};

// 13x13 outline icon
//static const XPoint mail_icon_size = { 13, 13 };
//static const char mail_icon_data[] = {
  //0x00, 0x00, 0xFF, 0x1F, 0x03, 0x18, 0x05, 0x14, 0x09, 0x12, 0x11, 0x11, 
  //0xE1, 0x10, 0x01, 0x10, 0x01, 0x10, 0x01, 0x10, 0x01, 0x10, 0xFF, 0x1F, 
  //0x00, 0x00, };
  
// 13x13 filled (shaded) icon
static const XPoint mail_icon_size = { 13, 13 };
static const char mail_icon_data[] = {  
  0x00, 0x00, 0x00, 0x00, 0xFC, 0x07, 0xFA, 0x0B, 0xF6, 0x0D, 0xEE, 0x0E, 
  0x1E, 0x0F, 0xFE, 0x0F, 0xFE, 0x0F, 0xFE, 0x0F, 0xFE, 0x0F, 0x00, 0x00, 
  0x00, 0x00, };   
#endif /* module_mail */


#ifdef module_connman
// The width and gap are used to calculate a bar height and hence
// the icon size (since it must be square).  The formula is:
// 3 * bar_width + 2 * bar_gap.
//
// A bar_width = 3 and bar_gap = 2 results in a 13x13 icon
// A bar_width = 4 and bar_gap = 2 results in a 16x16 icon
// A bar width = 4 and bar_gap = 3 results in a 18x18 icon
// You are not limited to these values, they are only provided for example.
static const short bar_width = 3;		// width of the rectangle (px)
static const short bar_gap = 2;			// gap between rectangles (px)

static const unsigned long conn_undefined		= 0x94BBD1;
static const unsigned long conn_offline		= 0xE81414;
static const unsigned long conn_idle			= 0xE0E00E;
static const unsigned long conn_ready			= 0x19E2DD;
static const unsigned long conn_online			= 0x11EE11;
//static const char *connman_click[] = { NULL };
static const char *connman_click[] = { "cmst", "--disable-tray-icon", NULL };
#endif /* module_connman */
