/* These macros are used where the server name is printed in logs and replies.
 * Note the difference in the first letter "V" vs "v". SERVER_TITLE is used in
 * readable text like log messages and SERVER_NAME is used in INFO fields and
 * similar. */
#define SERVER_NAME "valkey"
#define SERVER_TITLE "DiceDB"
#define DICEDB_VERSION "1.0.0"
#define DICEDB_VERSION_NUM 0x00010000

#define VALKEY_VERSION "8.0.6"
#define VALKEY_VERSION_NUM 0x00080006

/* Redis OSS compatibility version, should never
 * exceed 7.2.x. */
#define REDIS_VERSION "7.2.4"
#define REDIS_VERSION_NUM 0x00070204
