class Solution {
public:
    string pushDominoes(string dominoes) {
        string d = 'L' + dominoes + 'R';
        string ans = "";
        int left = 0;

        for (int right = 1; right < d.length(); right++) { // start from 1 to avoid midlen < 0
            if (d[right] == '.') continue;

            int midlen = right - left - 1;

            if (d[right] == d[left]) {
                ans += d[left];
                if (midlen > 0) ans += string(midlen, d[left]);
            } else if (d[left] == 'L' && d[right] == 'R') {
                ans += d[left];
                if (midlen > 0) ans += string(midlen, '.');
            } else {
                ans += 'R';
                int half = midlen / 2;
                if (half > 0) ans += string(half, 'R');
                if (midlen % 2 == 1) ans += '.';
                if (half > 0) ans += string(half, 'L');
            }

            left = right;
        }

        ans = ans.substr(1, dominoes.length());
        return ans;
    }
};
