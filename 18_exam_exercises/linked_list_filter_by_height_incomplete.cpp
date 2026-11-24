bool listHeight(pes* pHead, float altura) {
    if (pHead == nullptr) {
        return false;
    }
    pes* current = pHead;
    bool found = false;
    while (current != nullptr) {
        if (pes.altura >= altura) {
            std::cout << pes.nome << std::endl;
            found = true;
        }
        current = current->next;
    }
    return found;
}