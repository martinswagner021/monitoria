struct Dados {
    int dado;
    struct Dados* prox;
};

struct Dados n1 = {2, NULL};
struct Dados n2 = {1, &n1};