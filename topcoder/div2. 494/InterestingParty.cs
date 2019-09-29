using System;
using System.Collections.Generic;

class InterestingParty
    {
        public int bestInvitation(string[] first, string[] second)
        {
            Dictionary<string, int> bestTopics = new Dictionary<string, int>();

            for(int i=0; i<first.Length; i++)
            {
                bestTopics[first[i]] = 0;
                bestTopics[second[i]] = 0;
            }

            foreach (var i in first)
            {
                if (bestTopics.ContainsKey(i))
                {
                    bestTopics[i]++;
                }
            }

            foreach (var i in second)
            {
                if (bestTopics.ContainsKey(i))
                {
                    bestTopics[i]++;
                }
            }

            int answer = 0;

            foreach (var i in bestTopics)
            {
                answer = Math.Max(answer, i.Value);
            }

            return answer;
        }
    }