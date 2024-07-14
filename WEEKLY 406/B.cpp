class Solution {
public:
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        // Convert nums to an unordered_set for O(1) average time complexity lookups
        unordered_set<int> numSet(nums.begin(), nums.end());

        // Create a dummy node to handle edge cases smoothly
        ListNode dummy(0);
        dummy.next = head;

        // Use two pointers: prev (to keep track of the node before the current one) and curr (the current node)
        ListNode* prev = &dummy;
        ListNode* curr = head;

        while (curr != nullptr) {
            if (numSet.count(curr->val)) {
                // If current node's value is in numSet, remove it from the list
                prev->next = curr->next;
            } else {
                // Otherwise, move prev to the current node
                prev = curr;
            }
            // Move curr to the next node
            curr = curr->next;
        }

        // Return the modified list, which starts from dummy.next
        return dummy.next;
    }
};
