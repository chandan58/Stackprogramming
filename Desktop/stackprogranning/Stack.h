struct stack* new_stack()
{
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    return stack;
}

int top(struct stack* stack)
{

    return stack->top;
}

int size(struct stack *pt)
{
    return pt->top +1;
}
