#define MCF_MA_DATA_indication 1
#define CTL_OAMI_indication 2
#define LBF_OAMI_request 3
#define CTL_OAMI_request 4
#define MCF_MA_DATA_request 5
#define OAMPDU_INDICATION 6

struct _message{

	long int mtype;

	unsigned char data[1600];

};