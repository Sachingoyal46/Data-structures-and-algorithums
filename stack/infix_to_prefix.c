#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define stacksize 10
#define true 1
#define false 0

struct stack {
  int item[stacksize];
  int top;
};

void initialize(struct stack *s) {
  s->top = -1;

}

int is_empty(struct stack *s) {
  if ((s)->top == -1) {
    return true;
  } else
    return false;
}

void push(struct stack *s, int x) {

  if ((s)->top == stacksize - 1)
  {
    printf("stack overflowed\n");
    exit(1);
    }

  else
    (s)->top++;
  (s)->item[(s)->top] = x;
  
}

int pop(struct stack *s) {
  int x;
  if (is_empty(s)) {
    printf("stack is underflow\n");
    exit(1);

  } else
    x = (s)->item[(s)->top];
  (s)->top--;
  return x;
}

int stacktop(struct stack *s) {
  int x;
  x = s->item[s->top];
  return x;
}


int precedence(char a, char b) {
  if (a == '^' || a == '*' || a == '/' || a == '%') {
    if (b == '^') {
      return false;
    } else {
      return true;
    }
  } else {
    if (b == '+' || b == '-') {
      return true;
    } else {
      return false;
    }
  }
}
void infix_to_prefix(char *infix) {
    struct stack s;
  int i = 0, j = 0;
  char prefix[20], sy, x;
  initialize(&s);
  strrev(infix);
  while (infix[i] != '\0') {
    sy = infix[i];
    i++;
    if ((sy >= 'a' && sy <= 'z') || (sy >= 'A' && sy <= 'Z') ||
        (sy >= '0' && sy <= '9')) {
      prefix[j] = sy;
      j++;
    } else {
      while (!is_empty(&s) && !precedence(sy,stacktop(&s))) {
      
        x = pop(&s);
        prefix[j] = x;
        j++;
      }
      push(&s,sy);
    }
  }
  while (!is_empty(&s)) {
    x = pop(&s);
    prefix[j] = x;
    j++;
 
  }
  prefix[j] = '\0';
   strrev(prefix);
  printf("%s", prefix);
}
int main() {
  char infix[] = "a+b*c/d";
  infix_to_prefix(infix);
}
