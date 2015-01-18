
/* DESKTOP */
static const unsigned long background = 0x202428;
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

/* MAIL */
static MBox box[] = {
	/* path to maildir,                    color,    0 */
	//{"/home/USER/mail/ACCOUNT1/INBOX/new", 0x94BBD1, 0},
	//{"/home/USER/mail/ACCOUNT2/INBOX/new", 0x9498A2, 0},
	{"/home/andy/sandbox/new", 0x9498A2, 0},
	/* keep a null terminator */
	{NULL, 0, 0},
};

static const XPoint mail_icon_size = { 16, 16 };
static const char mail_icon_data[] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFE, 0x7F,
	0x06, 0x60, 0x0A, 0x50, 0x12, 0x48, 0x22, 0x44,
	0x42, 0x42, 0xA2, 0x45, 0x12, 0x48, 0x0A, 0x50,
	0x06, 0x60, 0xFE, 0x7F, 0x00, 0x00, 0x00, 0x00,
};

/* CONNMAN */
static const unsigned long conn_undefined  = 0x94BBD1;
static const unsigned long conn_offline		= 0xE81414;
static const unsigned long conn_idle				= 0xE0E00E;
static const unsigned long conn_ready			= 0x19E2DD;
static const unsigned long conn_online			= 0x11EE11;

// Command to execute on a mouse click.  First line is the full path
// to the program to run, second line is a list of any arguments which
// need to be provided to the program.  The on_click_connman variable
// must exist, but leave the array blank if you don't wish to execute a
// program on a  mouse click (example commented out).
static char* on_click_connman[] ={'\0'};
//static char* on_click_connman[] = {
	//"/usr/bin/cmst",
	//"--disable-tray-icon"
//};
