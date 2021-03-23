struct node
{
  int data;
  struct node *link;
}

void append()
{
  struct node *temp;
  temp = (struct node *) malloc (sizeof(struct node));
  printf("Enter node data: ");
  scanf("%d",&temp->data);
  temp->link = NULL;
  if(root == NULL)
    root = temp;
  else
  {
    struct node *p;
    p = root;
    while(p->link != NULL)
    {
	p = p->link;
    }
    p->link = temp;
}

int length()
{
  int count = 0;
  struct node *temp;
  temp = root;
  while(temp != NULL)
  {
    count++;
    temp = temp->link;
  }
  return count;
}

void addatbegin(){
  struct node *temp;
  temp = (struct node *) malloc(sizeof(struct node));
  printf("Enter node data ");
  scanf("%d", &temp->data);
  temp->link = NULL;
  if(root == NULL){
    root = temp;
  }
  else{
    temp->link = root;  //right connection first
    root = temp;    //left connection
  }
}

void addafter();
void display();
void delete();
void Reverse_list();
void swap();


int main(){


}

