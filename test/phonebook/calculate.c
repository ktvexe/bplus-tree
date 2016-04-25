#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp = fopen("orig.txt", "r");
    FILE *output = fopen("output.txt", "w");
    if (!fp) {
        printf("ERROR opening input file orig.txt\n");
        exit(0);
    }
    int i = 0;
    char append[50], find[50];
    double orig_sum_a = 0.0, orig_sum_f = 0.0, orig_a, orig_f;
    for (i = 0; i < 100; i++) {
        if (feof(fp)) {
            printf("ERROR: You need 100 datum instead of %d\n", i);
            printf("run 'make run' longer to get enough information\n\n");
            exit(0);
        }
        fscanf(fp, "%s %s %lf %lf\n", append, find,&orig_a, &orig_f);
        orig_sum_a += orig_a;
        orig_sum_f += orig_f;
    }
    fclose(fp);

    fp = fopen("opt.txt", "r");
    if (!fp) {
        fp = fopen("orig.txt", "r");
        if (!fp) {
            printf("ERROR opening input file opt.txt\n");
            exit(0);
        }
    }
    double opt_sum_a = 0.0, opt_sum_f = 0.0, opt_a, opt_f;
    for (i = 0; i < 100; i++) {
        if (feof(fp)) {
            printf("ERROR: You need 100 datum instead of %d\n", i);
            printf("run 'make run' longer to get enough information\n\n");
            exit(0);
        }
        fscanf(fp, "%s %s %lf %lf\n", append, find,&opt_a, &opt_f);
        opt_sum_a += opt_a;
        opt_sum_f += opt_f;
    }

    fp = fopen("hash.txt", "r");
    if (!fp) {
        fp = fopen("orig.txt", "r");
        if (!fp) {
            printf("ERROR opening input file hash.txt\n");
            exit(0);
        }
    }
    double hash_sum_a = 0.0, hash_sum_f = 0.0, hash_a, hash_f;
    for (i = 0; i < 100; i++) {
        if (feof(fp)) {
            printf("ERROR: You need 100 datum instead of %d\n", i);
            printf("run 'make run' longer to get enough information\n\n");
            exit(0);
        }
        fscanf(fp, "%s %s %lf %lf\n", append, find,&hash_a, &hash_f);
        hash_sum_a += hash_a;
        hash_sum_f += hash_f;
    }

    fp = fopen("trie.txt", "r");
    if (!fp) {
        fp = fopen("orig.txt", "r");
        if (!fp) {
            printf("ERROR opening input file trie.txt\n");
            exit(0);
        }
    }
    double trie_sum_a = 0.0, trie_sum_f = 0.0, trie_a, trie_f;
    for (i = 0; i < 100; i++) {
        if (feof(fp)) {
            printf("ERROR: You need 100 datum instead of %d\n", i);
            printf("run 'make run' longer to get enough information\n\n");
            exit(0);
        }
        fscanf(fp, "%s %s %lf %lf\n", append, find,&trie_a, &trie_f);
        trie_sum_a += trie_a;
        trie_sum_f += trie_f;
    }

    fp = fopen("rbtree.txt", "r");
    if (!fp) {
        fp = fopen("orig.txt", "r");
        if (!fp) {
            printf("ERROR opening input file rbtree.txt\n");
            exit(0);
        }
    }
    double rbtree_sum_a = 0.0, rbtree_sum_f = 0.0, rbtree_a, rbtree_f;
    for (i = 0; i < 100; i++) {
        if (feof(fp)) {
            printf("ERROR: You need 100 datum instead of %d\n", i);
            printf("run 'make run' longer to get enough information\n\n");
            exit(0);
        }
        fscanf(fp, "%s %s %lf %lf\n", append, find,&rbtree_a, &rbtree_f);
        rbtree_sum_a += rbtree_a;
        rbtree_sum_f += rbtree_f;
    }
 /*   
	 fp = fopen("bptree.txt", "r");
    if (!fp) {
        fp = fopen("orig.txt", "r");
        if (!fp) {
            printf("ERROR opening input file rbtree.txt\n");
            exit(0);
        }
    }
    double bptree_sum_a = 0.0, bptree_sum_f = 0.0, bptree_a, bptree_f;
    for (i = 0; i < 10; i++) {
        if (feof(fp)) {
            printf("ERROR: You need 100 datum instead of %d\n", i);
            printf("run 'make run' longer to get enough information\n\n");
            exit(0);
        }
        fscanf(fp, "%s %s %lf %lf\n", append, find,&bptree_a, &bptree_f);
        bptree_sum_a += bptree_a;
        bptree_sum_f += bptree_f;
    }

    fp = fopen("bptree_bulk.txt", "r");
    if (!fp) {
        fp = fopen("orig.txt", "r");
        if (!fp) {
            printf("ERROR opening input file rbtree.txt\n");
            exit(0);
        }
    }
    double bptree_bulk_sum_a = 0.0, bptree_bulk_sum_f = 0.0, bptree_bulk_a, bptree_bulk_f;
    for (i = 0; i < 10; i++) {
        if (feof(fp)) {
            printf("ERROR: You need 100 datum instead of %d\n", i);
            printf("run 'make run' longer to get enough information\n\n");
            exit(0);
        }
        fscanf(fp, "%s %s %lf %lf\n", append, find,&bptree_bulk_a, &bptree_bulk_f);
        bptree_bulk_sum_a += bptree_bulk_a;
        bptree_bulk_sum_f += bptree_bulk_f;
    }
*/

/*<<<<<<< HEAD
    fprintf(output, "append() %lf %lf %lf %lf %lf %lf %lf\n",orig_sum_a / 100.0, opt_sum_a / 100.0,
            hash_sum_a / 100.0, trie_sum_a / 100.0, rbtree_sum_a / 100.0,bptree_sum_a/10.0,bptree_bulk_sum_a/10.0);
    fprintf(output, "findName() %lf %lf %lf %lf %lf %lf %lf\n", orig_sum_f / 100.0, opt_sum_f / 100.0,
            hash_sum_f / 100.0, trie_sum_f / 100.0, rbtree_sum_f / 100.0,bptree_sum_f/10.0,bptree_bulk_sum_f/10.0);
    fprintf(output, "total %lf %lf %lf %lf %lf %lf %lf", (orig_sum_a + orig_sum_f) / 100.0,
            (opt_sum_a + opt_sum_f) / 100.0, (hash_sum_a + hash_sum_f) / 100.0,
            (trie_sum_a + trie_sum_f) / 100.0, (rbtree_sum_a + rbtree_sum_f) / 100.0,(bptree_sum_a +bptree_sum_f)/10.0,(bptree_bulk_sum_a+bptree_bulk_sum_f)/10.0);
=======
*/
	fp = fopen("bptree.txt", "r");
    if (!fp) {
        fp = fopen("orig.txt", "r");
        if (!fp) {
            printf("ERROR opening input file bptree.txt\n");
            exit(0);
        }
    }
    double bptree_sum_a = 0.0, bptree_sum_f = 0.0, bptree_a, bptree_f;
    for (i = 0; i < 10; i++) {
        if (feof(fp)) {
            printf("ERROR: You need 10 datum instead of %d\n", i);
            printf("run 'make run' longer to get enough information\n\n");
            exit(0);
        }
        fscanf(fp, "%s %s %lf %lf\n", append, find,&bptree_a, &bptree_f);
        bptree_sum_a += bptree_a;
        bptree_sum_f += bptree_f;
    }

    fp = fopen("bptree_bulk.txt", "r");
    if (!fp) {
        fp = fopen("orig.txt", "r");
        if (!fp) {
            printf("ERROR opening input file bptree_bulk.txt\n");
            exit(0);
        }
    }
    double bptree_bulk_sum_a = 0.0, bptree_bulk_sum_f = 0.0, bptree_bulk_a, bptree_bulk_f;
    for (i = 0; i < 10; i++) {
        if (feof(fp)) {
            printf("ERROR: You need 10 datum instead of %d\n", i);
            printf("run 'make run' longer to get enough information\n\n");
            exit(0);
        }
        fscanf(fp, "%s %s %lf %lf\n", append, find,&bptree_bulk_a, &bptree_bulk_f);
        bptree_bulk_sum_a += bptree_bulk_a;
        bptree_bulk_sum_f += bptree_bulk_f;
    }

    fprintf(output, "append() %lf %lf %lf %lf %lf %lf %lf\n",orig_sum_a / 100.0, opt_sum_a / 100.0,
            hash_sum_a / 100.0, trie_sum_a / 100.0, rbtree_sum_a / 100.0, bptree_sum_a / 10.0,
            bptree_bulk_sum_a / 10.0);
    fprintf(output, "findName() %lf %lf %lf %lf %lf %lf %lf\n", orig_sum_f / 100.0, opt_sum_f / 100.0,
            hash_sum_f / 100.0, trie_sum_f / 100.0, rbtree_sum_f / 100.0, bptree_sum_f / 10.0,
            bptree_bulk_sum_f / 10.0);
    fprintf(output, "total %lf %lf %lf %lf %lf %lf %lf", (orig_sum_a + orig_sum_f) / 100.0,
            (opt_sum_a + opt_sum_f) / 100.0, (hash_sum_a + hash_sum_f) / 100.0,
            (trie_sum_a + trie_sum_f) / 100.0, (rbtree_sum_a + rbtree_sum_f) / 100.0,
            (bptree_sum_a + bptree_sum_f) / 10.0, (bptree_bulk_sum_a + bptree_bulk_sum_f) / 10.0);
//>>>>>>> upstream2/master
    fclose(output);
    fclose(fp);
    return 0;
}
