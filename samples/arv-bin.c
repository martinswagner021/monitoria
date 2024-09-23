struct Arv {
    int dado;
    struct Arv* esq;
    struct Arv* dir;
};

struct Arv filho_esq = {5, NULL, NULL};
struct Arv filho_dir = {15, NULL, NULL};
struct Arv raiz = {10, &filho_esq, &filho_dir};