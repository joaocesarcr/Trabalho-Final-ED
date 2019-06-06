#include <string.h>
#include "./List.h"

#define NAME_LENGTH 20
#define TWITTER_TEXT_LENGTH 140

typedef struct s_userInfo {
	int tweetCount;
	int mentionCount;
	int retweetCount;
	int likeCount;
} UserInfo;

UserInfo UserInfo_New(int tweetCount, int mentionCount, int retweetCount, int likeCount);

typedef struct s_User {
	char name[NAME_LENGTH];
	UserInfo info;
} User;

User User_New(char name[NAME_LENGTH], UserInfo info);

typedef struct s_HashTag {
	char name[20];
	List* tweetList;
	int tweetCount;
} Hashtag;

Hashtag Hashtag_New(char name[NAME_LENGTH]);

typedef struct s_Tweet {
	User *creator;
	int reTweetCount;
	int likeCount;
	char text[TWITTER_TEXT_LENGTH];
	List* mentionList;
	List* hashtagList;
} Tweet;

Tweet Tweet_New(User* creator, int reTweetCount, int likeCount, char text[TWITTER_TEXT_LENGTH]);

void opA(int qttHash, int qttCit); // Listar as hastags mais citadas em toda rede.
void opB(int userQtt);   // Listar os usuários que mais postam tweets.
void opC(int tweetsQtt); // Listar os tweets com maior número de retweets.
void opD(int userQtt);   // Listar os usuários mais mencionados nos tweets.
void opE(int userQtt);   // Listar os usuários mais influentes (aquele que possui o maior número de retweets.)
void opF(int userQtt);   // Listar os usuários mais engajados da rede. Engajamento é a interação do público com as postagens do usuário e determina o alcance das postagens. O engajamento é contabilizado pela somatório da quantidade de interações dos tweets de um usuário, que inclui: gostar do tweet (like), quantidade de retweets e quantidade de menções ao usuário.
