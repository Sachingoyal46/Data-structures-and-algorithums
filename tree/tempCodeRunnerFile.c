struct node *getnode() {
  struct node *p;
  p = (struct node *)malloc(sizeof(struct node));
  return p;
}