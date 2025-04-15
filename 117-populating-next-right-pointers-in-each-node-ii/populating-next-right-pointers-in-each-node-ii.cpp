class Solution {
public:
    Node* connect(Node* root) {
        if (root == NULL) return NULL;

        if (root->left != NULL) {
            if (root->right != NULL) {
                root->left->next = root->right;
            } else {
                root->left->next = findNext(root->next);
            }
        }

        if (root->right != NULL) {
            root->right->next = findNext(root->next);
        }

        connect(root->right);
        connect(root->left);

        return root;
    }

private:
    Node* findNext(Node* node) {
        while (node != NULL) {
            if (node->left != NULL) return node->left;
            if (node->right != NULL) return node->right;
            node = node->next;
        }
        return NULL;
    }
};
