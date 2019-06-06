#include "../Header/Tweet.h"

//Fun��es inicializadoras das estruturas

UserInfo UserInfo_New(int tweetCount, int mentionCount, int retweetCount, int likeCount)
{
	UserInfo userInfo;
	userInfo.tweetCount = tweetCount;
	userInfo.mentionCount = mentionCount;
	userInfo.retweetCount = retweetCount;
	userInfo.likeCount = likeCount;

	return userInfo;
}

User User_New(char name[NAME_LENGTH], UserInfo info)
{
	User user;
	strcpy(user.name, name);
	user.info = info;

	return user;
}

Hashtag Hashtag_New(char name[NAME_LENGTH]) {
	Hashtag hashtag;
	strcpy(hashtag.name, name);
	hashtag.tweetCount = 0;
	hashtag.tweetList = List_New();

	return hashtag;
}

Tweet Tweet_New(User * creator, int reTweetCount, int likeCount, char text[TWITTER_TEXT_LENGTH])
{
	Tweet tweet;
	tweet.creator = creator;
	tweet.reTweetCount = reTweetCount;
	tweet.likeCount = likeCount;
	strcpy(tweet.text, text);
	tweet.hashtagList = List_New();
	tweet.mentionList = List_New();

	return tweet;
}

//Fun��es das opera��es

/*
OPERA��O a.
Listar as hastags mais citadas em toda rede.
A opera��o recebe como entrada um n�mero que indica quantas hashtags devem ser listadas e quantidade de cita��es.
Se o n�mero for zero, todas as hashtags devem ser listadas.
A sa�da da fun��o � uma lista em ordem decrescente das hastags mais citadas.
Restri��es:
(i) listar um resultado por linha;
(ii) hashtags com a mesma frequ�ncia devem ser listadas em ordem alfab�tica.

Arvore binaria de pesquisa ordem lexografica

*/
void opA(int qttHash, int qttCit) {

}

/*
OPERA��O b.
Listar os usu�rios que mais postam tweets.
A opera��o recebe como entrada um n�mero que indica quantos usu�rios devem ser listados.
Se o n�mero for zero, todos os usu�rios devem ser listados.
A sa�da da fun��o � uma lista em ordem decrescente de usu�rios mais ativos e o n�mero de postagens. Restri��es: (i) listar um resultado por linha.

Arvore binaria de pesquisa ordem lexografica
*/
void opB(int userQtt) {
}

/*
OPERA��O c.
Listar os tweets com maior n�mero de retweets.
A opera��o recebe como entrada um n�mero que indica quantos tweets devem ser listados.
Se o n�mero for zero, todos os tweets devem ser listados. A sa�da da fun��o � uma lista em ordem decrescente de tweets mais �retuitados� e o n�mero de retweets. Restri��es: (i) listar um resultado por linha; (ii) tweets com a mesma frequ�ncia devem ser listados em ordem alfab�tica.
*/

void opC(int tweetsQtt) {

}

/*
OPERA��O d.
Listar os usu�rios mais mencionados nos tweets.
A opera��o recebe como entrada um n�mero que indica quantos usu�rios devem ser listados.
Se o n�mero for zero, todos os usu�rios devem ser listados.
A sa�da da fun��o � uma lista em ordem decrescente de usu�rios mais mencionados.
Restri��es:
(i) listar um resultado por linha;
(ii) usu�rios com a mesma frequ�ncia devem ser listados em ordem alfab�tica.
*/
void opD(int usrQtt) {

}

/*
OPERA��O e.
Listar os usu�rios mais influentes. Um usu�rio influente � aquele que possui o maior n�mero de retweets.
A opera��o recebe como entrada um n�mero que indica quantos usu�rios devem ser listados.
Se o n�mero for zero, todos os usu�rios devem ser listados.
A sa�da da fun��o � uma lista em ordem decrescente pelo n�mero de influ�ncia e o total de retweets.
Restri��es:
(i) listar um resultado por linha;
(ii) usu�rios com a mesma frequ�ncia devem ser listados em ordem alfab�tica.
*/
void opE(int userQtt) {

}

/*
OPERA��O f.
Listar os usu�rios mais engajados da rede. Engajamento � a intera��o do p�blico com as postagens do usu�rio e determina o alcance das postagens. O engajamento � contabilizado pela somat�rio da quantidade de intera��es dos tweets de um usu�rio, que inclui: gostar do tweet (like), quantidade de retweets e quantidade de men��es ao usu�rio.
A opera��o recebe como entrada um n�mero que indica quantos usu�rios devem ser listados.
Se o n�mero for zero, todos os usu�rios devem ser listados.
A sa�da da fun��o � uma lista em ordem decrescente de engajamento que deve exibir o usu�rio e o n�mero de engajamento.
Restri��es:
(i) listar um resultado por linha;
(ii) usu�rios com a mesma frequ�ncia devem ser listados em ordem alfab�tica.
*/

void opF(int userQtt) {

}

/*
OPERA��O g.
Listar os termos associados a uma hashtag.
A opera��o recebe como entrada uma hashtag e um n�mero que indica quantas hashtags associadas devem ser listadas.
Se o n�mero for zero, todos as hashtags associadas devem ser listadas.
A sa�da da fun��o � uma lista em ordem decrescente do n�mero de vezes que a hashtag aparece associada, seguida do n�mero de vezes.
Restri��es:
(i) listar um resultado por linha;
(ii) hashtags com a mesma frequ�ncia devem ser listadas em ordem alfab�tica.
*/

/*
Tempo.
Deve ser contabilizado o tempo do carregamento da base de dados na estrutura e o tempo da gera��o do arquivo de sa�das.
*/
