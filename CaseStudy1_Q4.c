#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);

    int char_counts[26] = {0};

    for (int i = 0; i < n; i++)
    {
        char rock_composition[100];
        scanf("%s", rock_composition);

        bool rock_counts[26] = {false};

        for (int j = 0; rock_composition[j] != '\0'; j++)
        {
            if (rock_composition[j] >= 'a' && rock_composition[j] <= 'z')
            {
                rock_counts[rock_composition[j] - 'a'] = true;
            }
        }

        for (int k = 0; k < 26; k++)
        {
            if (rock_counts[k])
            {
                char_counts[k]++;
            }
        }
    }

    int gem_element_count = 0;

    for (int i = 0; i < 26; i++)
    {
        if (char_counts[i] == n)
        {
            gem_element_count++;
        }
    }

    printf("%d\n", gem_element_count);

    return 0;
}
