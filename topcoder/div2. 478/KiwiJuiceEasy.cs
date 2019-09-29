class KiwiJuiceEasy
    {
        public int[] thePouring(int[] capacities, int[] bottles, int[] fromId, int[] toId)
        {
            int length = fromId.Length;
            for (int i = 0; i < length; i++)
            {
                int cap = capacities[toId[i]];
                int targetSize = bottles[toId[i]];
                int size = bottles[fromId[i]];

                int need = cap - targetSize;

                if(need < size)
                {
                    bottles[toId[i]] += need;
                    bottles[fromId[i]] -= need;
                }
                else
                {
                    bottles[toId[i]] += size;
                    bottles[fromId[i]] = 0;
                }
            }

            return bottles;
        }
    }