#include <stdio.h>

struct social{
    char *name;  
 
    int users;  
}stats[] = {
    {"Facebook           ", 2234},
    {"YouTube            ", 1500},
    {"WhatsApp           ", 1500},
    {"Facebook Messenger ", 1300},
    {"Wechat             ", 980},
    {"Instagram          ",813},
    {"Tumblr             ", 794},
    {"QQ                 ",783},

}, *ps;


void average(struct social *ps, int len);
void over_billion(struct social *ps, int len);
int main(){
 
    int len = sizeof(stats) / sizeof(struct social);
    printf("\nTop eight most popular social networks worldwide as of April 2018, ranked by number of active users(in millions):\n");
    printf("Name\t\t\t\t\tActive Users(mil)\t\n");
    for(ps=stats; ps<stats+len; ps++){
        printf("%s\t\t\t%d\t\n", ps->name, ps->users);
    }
    average(stats, len);
    over_billion(stats, len);
    return 0;
}

void average(struct social *ps, int len){
    int i;
    int average, sum = 0;
  
    for(i=0; i<len; i++){
        sum += (ps + i) ->users;
    }
    average = sum/len;
    printf("\nThe average number of the active users of the top eight social network is %d \n",average);
}

void over_billion(struct social *ps, int len){
	int i;
	int current_users;
	int bil=0;
	for (i = 0;i < len; i++)
	{	current_users = (ps+i) -> users;
		
		if (current_users >= 1000)
		bil++;
	
	}
	printf("there are %d social networks with over a billion users.\n",bil);	

}
