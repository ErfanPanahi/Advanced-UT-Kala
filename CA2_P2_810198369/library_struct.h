#include <stdio.h>
typedef struct user user;
typedef struct goods goods;
struct user {
	char* username;
	char* password;
	char* role;
	int balance;
	goods* goods;
	user* next;
};
struct goods {
	char* goods_name;
	int goods_count;
	int goods_price;
	char* seller_name;
	float ave_rate;
	float rater_count;
	int salable;//shows that this good has less than 2 rate or not
	goods* next;
};
char* get_string1(char *);
char* get_string2(char *);
user new_user(void);
user signup(user*);
user login(user*, goods*, user);
user* check_login(user*, user);
user* deposit(user*);
int view(user*);
user add_goods(user*, goods*);
user buy(user*,user*, goods*);
user remove_goods(user*, goods*);
user change_goods_price(user*, goods*);
user rate_goods(user*, goods*);
user search(goods*);
user users_file(user*);
goods goods_file(goods*);
user load_user(user*);
goods load_goods(goods*);
char* load_str(FILE*);
char* del_str(FILE*);